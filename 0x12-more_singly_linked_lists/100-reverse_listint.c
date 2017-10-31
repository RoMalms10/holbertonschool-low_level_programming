#include "lists.h"

/**
  * reverse_listint - reverses a singly linked list
  * @head: a double pointer to the beginning of the linked list
  * Return: the new head of the linked list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before;
	listint_t *after;

	before = NULL;
	while (*head != NULL)
	{
		after = (*head)->next;/*do this here, so no problem with NULL*/
		(*head)->next = before;
		before = *head;
		*head = after;
	}
	*head = before;
	return (*head);
}
