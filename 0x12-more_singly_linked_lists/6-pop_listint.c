#include "lists.h"

/**
  * pop_listint - destorys the first node in a linked list and returns contents
  * @head: double pointer to the beginning of the linked list
  * Return: The number stored inside the "popped" node
  */
int pop_listint(listint_t **head)
{
	int hold;
	listint_t *temp;

	if (head == NULL)
		return (0);
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = (*head)->next;
		hold = (*head)->n;
		free(*head);
		*head = temp;
		return (hold);
	}
}
