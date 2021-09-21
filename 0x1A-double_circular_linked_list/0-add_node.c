#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

/**
 * add_node_end - Print informations about each element of a list
 *
 * @list: A pointer to the head of the linkd list
 * @str: Node content to add
 *
 * Return: void
 */
List *add_node_end(List **list, char *str)
{
	List *newNode, *head, *tail;

	if (!str)
	return (NULL);


	newNode = malloc(sizeof(List));
	if (!newNode)
	return (NULL);
	newNode->str = strdup(str);
	if (!newNode->str)
	return (NULL);

	if (!list || *list == NULL)
	{
		newNode->next = newNode;
		newNode->prev = newNode;
		*list = newNode;
		return (newNode);
	}

	head = *list;
	tail = head->prev;
	newNode->next = head;
	newNode->prev = tail;
	tail->next = newNode;
	head->prev = newNode;

	return (newNode);

}

/**
 * add_node_begin - Print informations about each element of a list
 *
 * @list: A pointer to the head of the linkd list
 * @str: Node content to add
 *
 * Return: void
 */
List *add_node_begin(List **list, char *str)
{
	List *newNode, *head, *tail;

	if (!str)
	return (NULL);


	newNode = malloc(sizeof(List));
	if (!newNode)
	return (NULL);
	newNode->str = strdup(str);
	if (!newNode->str)
	return (NULL);

	if (!list || !*list)
	{
		newNode->next = newNode;
		newNode->prev = newNode;
		*list = newNode;
		return (newNode);
	}

	head = *list;
	tail = head->prev;
	newNode->next = head;
	newNode->prev = tail;
	tail->next = newNode;
	head->prev = newNode;
	*list = newNode;

	return (newNode);
}
