#include "lists.h"

/**
  * free_listint_safe - frees a linked list even if it has a loop
  * @h: double pointer to the beginning of the list
  * Return: the number of nodes freed
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *check_ptr;
	listint_t *current;
	size_t catchup;
	size_t count;

	if (h == NULL || *h == NULL)
		return (0);
	count = 0;
	current = *h;
	while (current != NULL)
	{
		catchup = 0;
		check_ptr = *h;
		while (catchup < count)
		{
			if (check_ptr == current)
			{
				*h = NULL;
				return (count);
			}
			check_ptr = check_ptr->next;
			catchup++;
		}
		free(current);
		current = current->next;
		count++;
	}
	*h = NULL;
	return (count);
}
