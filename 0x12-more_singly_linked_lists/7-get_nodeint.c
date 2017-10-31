#include "lists.h"

/**
  * get_nodeint_at_index - gets the nth node's information
  * @head: pointer to the beginning of the linked list
  * @index: the nth node to look at
  * Return: the nth node's address
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;
	while (n < index)
	{
		if (head == NULL)
			return (head);
		head = head->next;
		n++;
	}
	return (head);
}
