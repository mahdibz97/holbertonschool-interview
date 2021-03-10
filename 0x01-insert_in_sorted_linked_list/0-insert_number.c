#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer
 * @number: number
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newnode, *n;

	if (!head)
	return (NULL);
	n = *head;
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	return (NULL);
	newnode->n = number;
	newnode->next = NULL;
	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}
	if (n->n > number)
	{
		*head = newnode;
		newnode->next = n;
		return (newnode);
	}
	while (n->next && n->next->n < number)
	n = n->next;
	newnode->next = n->next;
	n->next = newnode;
	return (newnode);
}
