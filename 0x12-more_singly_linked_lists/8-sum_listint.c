#include "lists.h"

/**
  * sum_listint - adds all the values in a listint_t list
  * @head: pointer to the beginning of the list
  * Return: the sum of all the values in a listint_t list
  */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
