#include "lists.h"

/**
 * check_cycle - A function that checks if a list has a cycle.
 * @list: Linked list.
 *
 * Return: Always 1 (Success) if the list has a cycle, 0 if not.
 */
int check_cycle(listint_t *list)
{
	listint_t *fast, *slow;

	if (!list || !list->next)
		return (0);
	fast = list;
	slow = list;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
		return (1);
		}
	}
	return (0);
}
