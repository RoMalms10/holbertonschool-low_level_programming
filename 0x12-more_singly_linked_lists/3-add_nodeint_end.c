#include "lists.h"

/**
  * add_nodeint_end - adds a node to the end of a singly linked list
  * @head: the double pointer to the beginning of the list
  * @n: the number to assign to the new node
  * Return: the address of the new node or NULL if failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = newnode;
	}
	newnode->n = n;
	newnode->next = NULL;
	return (newnode);
}
