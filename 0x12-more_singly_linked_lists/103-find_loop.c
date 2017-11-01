#include "lists.h"

/**
  * find_listint_loop - finds the first instance of a loop
  * in a single linked list
  * @head: pointer to the beginning of the list
  * Return: the first instance of the loop, or NULL if no loop
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current;
	listint_t *check_ptr;
	size_t count;
	size_t catchup;

	count = 0;
	current = head;
	while (current != NULL)
	{
		catchup = 0;
		check_ptr = head;
		while (catchup < count)
		{
			if (check_ptr == current)
				return (current);
			check_ptr = check_ptr->next;
			catchup++;
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
