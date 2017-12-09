#include "lists.h"

/**
  * get_dnodeint_at_index - goes to specified node and returns it
  * @head: pointer to the list
  * @index: the node to return
  * Return: the node specified, NULL if no list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head == NULL)
		return (NULL);
	for (counter = 0; head != NULL && counter < index; counter++)
		head = head->next;
	return (head);
}
