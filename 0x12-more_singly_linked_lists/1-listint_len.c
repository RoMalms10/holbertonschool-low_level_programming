#include "lists.h"

/**
  * listint_len - finds how long a linked list is
  * @h: pointer to the beginning of the linked list
  * Return: how many nodes are in the linked list
  */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
