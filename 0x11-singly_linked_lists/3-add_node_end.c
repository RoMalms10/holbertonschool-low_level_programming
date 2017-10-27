#include "lists.h"

/**
  * add_node_end - adds a node to the end of a linked list
  * @head: pointer to a pointer to the beginning of the list
  * @str: the string to put in a struct
  * Return: address of the new element, or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewNode;
	list_t *current;

	if (head == NULL)
		return (NULL);
	NewNode = malloc(sizeof(list_t));
	if (NewNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = NewNode; /*move to point to the beginning of list*/
	}
	else
	{
		current = *head; /*head NEEDS to point to beginning*/
			/*so create a new variable to move through the list*/
		while (current->next != NULL) /*finds last node*/
			current = current->next;
		current->next = NewNode; /*at last node, point it to new node*/
	}
	NewNode->str = str == NULL ? NULL : strdup(str);
	NewNode->len = NewNode->str == NULL ? 0 : strlen(NewNode->str);
	NewNode->next = NULL;
	return (NewNode);
}
