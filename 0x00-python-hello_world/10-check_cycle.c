#include "lists.h"

/**
 * check_cycle - It checks if a linked list contain
 a cycle
 * @list: Linked list to check
 *
 * Return: Always 1 (Success) if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
