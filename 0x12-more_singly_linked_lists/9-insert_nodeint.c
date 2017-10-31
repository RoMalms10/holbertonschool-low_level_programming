#include "lists.h"

/**
  * insert_nodeint_at_index - insert a new node at specified location
  * @head: double pointer to the beginning of the list
  * @idx: the spot to insert the new node, starts at 0 (means 1 after value)
  * @n: value to store in the new node
  * Return: address of the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *current;
	unsigned int track;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		track = 0;
		current = *head;
		while (track < (idx - 1)) /*finding the node to go to*/
		{
			if (current == NULL)
			{
				free(newnode);
				return (NULL);
			}
			current = current->next;
			track++;
		}
		newnode->next = current->next; /*add node 1 after idx*/
		current->next = newnode;
	}
	newnode->n = n;
	return (newnode);
}
