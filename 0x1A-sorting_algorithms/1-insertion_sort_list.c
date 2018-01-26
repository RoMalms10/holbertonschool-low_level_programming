#include "sort.h"

/**
  * insertion_sort_list - insertion sort for doubly linked list
  * @list: the doubly link list to sort using insertion sort method
  * Return: nothing, void
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
			while (sorted != NULL)
			{
				if (sorted->n < compare->n)
					break;
				/*Remove node from list*/
				compare->prev->next = compare->next;
				if (compare->next != NULL)
					compare->next->prev = compare->prev;
				/*move node above sorted pointer*/
				if (sorted->prev != NULL)
					sorted->prev->next = compare;
				compare->prev = sorted->prev;
				/*connect the compared node to the sorted node*/
				compare->next = sorted;
				sorted->prev = compare;
				/*move sorted up one before compare*/
				sorted = compare->prev;
				/*move the head of the list if needed*/
				if (compare->prev == NULL)
					*list = compare;
				print_list(*list);
			}
		}
		compare = after;
	}
}
