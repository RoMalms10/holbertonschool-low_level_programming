#include "lists.h"

/**
  * list_len - finds how many elements (nodes) are in a list
  * @h: the pointer starting to the beginning of the list
  * Return: the amount of elements in the list
  */
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
