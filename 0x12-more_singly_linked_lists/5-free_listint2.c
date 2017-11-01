#include "lists.h"

/**
  * free_listint2 - frees a single linked list and sets the head back to NULL
  * @head: double pointer to the beginning of the list
  * Return: nothing, void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
