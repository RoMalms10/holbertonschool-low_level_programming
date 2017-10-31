#include "lists.h"

/**
  * free_listint - frees a single linked listint_t list
  * @head: pointer to the beginning of the list
  * Return: Nothing, void
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
