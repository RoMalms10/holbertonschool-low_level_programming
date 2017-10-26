#include "lists.h"

/**
  * add_node - adds nodes to the front of a list
  * @head: points to the head of the list
  * @str: the string to put in the list
  * Return: the address of the head
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = str == NULL ? NULL : strdup(str);
	temp->len = str == NULL ? 0 : strlen(str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
