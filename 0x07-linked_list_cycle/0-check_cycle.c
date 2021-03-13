#include "lists.h"
/**
 * check_cycle - checks if a singly linked list has a cycle
 * @list: head
 * Return: 1 or 0
 */
int check_cycle(listint_t *list)
{
	listint_t *i, *j;

	if (!list)
		return (0);
	i = list;
	if (!list->next)
		return (0);
	j = (list->next)->next;
	while (j && j->next)
	{
		if (i == j)
			return (1);
		i = i->next;
		j = (j->next)->next;
	}
	return (0);
}