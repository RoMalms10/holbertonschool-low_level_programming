#include "lists.h"

/**
  * add_dnodeint_end - adds node to the end of a doubly liked list
  * @head: double pointer the beginning of the doubly linked list
  * @n:the number to put in the new element
  * Return: 
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *traverse;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->next = *head;
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		newnode->next = NULL;
		newnode->prev = traverse;
		traverse->next = newnode;
	}
	return (newnode);
}
