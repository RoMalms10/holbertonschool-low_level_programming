#include "sort.h"

/**
  * cocktail_sort_list - sort the doubly linked list using cocktail sort
  * @list: the list to sort
  * Return: nothing, void
  */
void cocktail_sort_list(listint_t **list)
{
	listint_t *search;
	int flag;

	while (search != NULL)
	{

		search = *list;
		flag = 0;
		while (search->next != NULL)
		{
			if (search->n > search->next->n)
			{
				swap_down(list, search);
				flag = 1;
			}
			else
				search = search->next;
		}
		if (flag == 0)
			break;
		while (search->prev != NULL)
		{
			if (search->n < search->prev->n)
			{
				swap_up(list, search);
				flag = 1;
			}
			else
				search = search->prev;
		}
		if (flag == 0)
			break;
	}
}

/**
  * swap_down - swaps a node downwards
  * @list: the list to sort
  * @search: the pointer to the node to swap down one
  * Return: nothing, void
  */
void swap_down(listint_t **list, listint_t *search)
{
	/*Extract Node*/
	search->next->prev = search->prev;
	if (search->prev != NULL)
		search->prev->next = search->next;
	/*Move node down 1*/
	search->prev = search->next;
	search->next = search->next->next;
	/*Connect next node to the moved node*/
	if (search->next != NULL)
		search->next->prev = search;
	search->prev->next = search;
	if (search->prev->prev == NULL)
		*list = search->prev;
	print_list(*list);
}

/**
  * swap_up - swaps a node upwards
  * @list: the list to sort
  * @search: the pointer to the node to swap up one
  * Return: nothing, void
  */
void swap_up(listint_t **list, listint_t *search)
{
	/*Extract Node*/
	if (search->next != NULL)
		search->next->prev = search->prev;
	search->prev->next = search->next;
	/*Move node up 1*/
	search->next = search->prev;
	search->prev = search->prev->prev;
	/*Connect nodes*/
	if (search->prev != NULL)
		search->prev->next = search;
	search->next->prev = search;
	if (search->prev == NULL)
		*list = search;
	print_list(*list);
}
