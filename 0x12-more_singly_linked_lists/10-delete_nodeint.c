#include "lists.h"

/**
  * delete_nodeint_at_index - deletes a specified node
  * @head: double pointer to the beginning of the array
  * @index: the node to delete, starts counting at 0
  * Return: 1 if success, -1 if failure
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int track;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	current = *head;
	track = 0;
	if (index == 0)
	{
		*head = (*head)->next;
	}
	else
	{
		while (track < (index - 1))
		{
			if (current == NULL)
				return (-1);
			current = current->next;
			track++;
		}
		temp = current;
		current = current->next;
		temp->next = current == NULL ? NULL : current->next;
	}
	free(current);
	return (1);
}
