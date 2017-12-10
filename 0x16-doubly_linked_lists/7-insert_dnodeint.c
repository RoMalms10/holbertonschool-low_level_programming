#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a node at the specified index
  * @h: the double pointer to the doubly linked list
  * @idx: the index to insert at
  * @n: the number to assign to the newnode
  * Return: Null if failed, otherwise new node's address
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
	if (*h == NULL && idx != 0)
	{
		return (NULL);
	}
	else if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		if (newnode->next != NULL)
			newnode->next->prev = newnode;
		*h = newnode;
	}
	else
	{
		traverse = *h;
		for (i = 0; traverse != NULL && i < (idx - 1); i++)
			traverse = traverse->next;
		if (traverse == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = traverse->next;
		newnode->prev = traverse;
		if (traverse->next != NULL)
			traverse->next->prev = newnode;
		traverse->next = newnode;
	}
	return (newnode);
}
