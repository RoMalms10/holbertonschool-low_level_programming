#include "lists.h"

/**
  *
  *
  *
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *traverse;
	dlistint_t *newnode;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (*h == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*h = newnode;
	}
	else
	{
		traverse = *h;
		for (i = 0; traverse->next != NULL && i < idx; i++)
			traverse = traverse->next;
		newnode->next = traverse;
		newnode->prev = traverse->prev;
		traverse->prev->next = newnode;
	}
	return (newnode);
}
