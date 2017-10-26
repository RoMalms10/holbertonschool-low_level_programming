#include "lists.h"

/**
  * print_list - prints a list starting from the first node
  * @h: a pointer to the first node
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t counter;
	unsigned int temp;
	char *strtemp;

	counter = 0;
	while (h != NULL)
	{
		temp = h->str == NULL ? 0 : h->len;
		strtemp = h->str == NULL ? "(nil)" : h->str;
		printf("[%u] %s\n", temp, strtemp);
		h = h->next;
		counter++;
	}
	return (counter);
}
