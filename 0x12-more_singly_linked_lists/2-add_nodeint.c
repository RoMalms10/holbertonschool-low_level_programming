#include "lists.h"

/**
  * add_nodeint - adds a node to the beginning of a linked list
  * @head: double pointer to list, able to move pointer to beginning of list
  * @n: the value to store in the new node
  * Return: address of the new node or NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
