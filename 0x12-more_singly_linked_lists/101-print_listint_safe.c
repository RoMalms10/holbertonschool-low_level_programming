#include "lists.h"

/**
  * print_listint_safe - prints a single linked list and stop if it encounters
  * a loop in the list
  * @head: pointer to the beginning of the list
  * Return: the number of elements, or 98 if failed
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	size_t catchup;
	const listint_t *check_ptr;
	const listint_t *current;

	if (head == NULL)
		exit(98);
	current = head;
	count = 0;
	while (current != NULL)
	{
		catchup = 0;
		check_ptr = head;
		while (catchup < count)
		{
			if (check_ptr == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
			check_ptr = check_ptr->next;
			catchup++;
		}
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	}
	return (count);
}
