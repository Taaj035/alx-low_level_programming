#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of list.
 * @head: pointer to singly linked list.
 * @str: pointer to singly linked string strength
 * Return: Address of the new element else return NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[length])
		length++;

	new_node->len = length;

	new_node->str = strdup(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
