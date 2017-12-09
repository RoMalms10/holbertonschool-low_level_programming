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
		traverse->prev = newnode;
		traverse->prev->next = newnode;
	}
	return (newnode);
}
