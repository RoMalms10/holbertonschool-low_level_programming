#include "lists.h"

/**
  * find_listint_loop - finds the first instance of a loop
  * in a single linked list
  * @head: pointer to the beginning of the list
  * Return: the first instance of the loop, or NULL if no loop
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast;
	listint_t *slow;

	fast = slow = head;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (1)
			{
				if (slow == fast)
					return (slow);
				slow = slow->next;
				fast = fast->next;
			}
		}
	}
	return (NULL);
}
