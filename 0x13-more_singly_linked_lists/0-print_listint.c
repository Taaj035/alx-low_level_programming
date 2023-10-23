#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a list, listint_t.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list listint_t
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
