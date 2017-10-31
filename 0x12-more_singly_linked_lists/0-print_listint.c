#include "lists.h"

/**
  * print_listint - prints all the information in a linked list
  * @h: pointer to the beginning of the list
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
