#include "lists.h"

/**
  * free_list - frees up malloc'd structs and strings used to create lists
  * @head: the pointer to the list
  * Return: nothing, void
  */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		free(head->str);
		head = head->next; /*move before the pointer is freed*/
		free(current); /*because the structs were malloc'd as well*/
	}
}
