#include "sort.h"

/**
  *
  *
  *
  *
  *
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *compare;
	listint_t *after;
	listint_t *sorted;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	compare = after = (*list)->next;
	while (after != NULL)
	{
		after = compare->next;
		sorted = compare->prev;
		if (sorted->n > compare->n)
		{
			/*find where the node goes in the sorted part*/
			while (sorted->prev != NULL)
			{
				if (sorted->prev->n < compare->n)
					break;
				sorted = sorted->prev;
			}
			/*Remove node from list*/
			compare->prev->next = after;
			if (after != NULL)
				after->prev = compare->prev;
			/*move node above sorted pointer*/
			if (sorted->prev != NULL)
				sorted->prev->next = compare;
			compare->prev = sorted->prev;
			/*connect the compared node to the sorted node*/
			compare->next = sorted;
			sorted->prev = compare;
			/*move the head of the list if needed*/
			if (compare->prev == NULL)
				*list = compare;
			print_list(*list);
		}
		compare = compare->next;
	}
}
