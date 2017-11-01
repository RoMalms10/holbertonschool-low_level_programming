#include "lists.h"

/**
  * free_listint_safe - frees a linked list even if it has a loop
  * @h: double pointer to the beginning of the list
  * Return: the number of nodes freed
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	while (*h != NULL)
	{
		temp = (*h)->next;
		(*h)->next = NULL;
		free(*h);
		*h = temp;
		count++;
	}
	return (count);
}
