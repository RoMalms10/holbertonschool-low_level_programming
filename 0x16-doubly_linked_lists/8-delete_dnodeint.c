#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes a node at the index
  * @head: double pointer to the list
  * @index: indicates which node to delete
  * Return: 1 if success, -1 if failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *traverse;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	traverse = *head;
	if (index == 0)
	{
		*head = traverse->next;
		if (traverse->next != NULL)
			traverse->next->prev = NULL;
	}
	else
	{
		for (i = 0; traverse != NULL && i < index; i++)
			traverse = traverse->next;
		if (traverse == NULL)
			return (-1);
		traverse->prev->next = traverse->next;
		if (traverse->next != NULL)
			traverse->next->prev = traverse->prev;
	}
	free(traverse);
	return (1);
}
