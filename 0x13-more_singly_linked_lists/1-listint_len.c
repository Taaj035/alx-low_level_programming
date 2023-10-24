#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Prints the number of elements in linked list
 * @h: Pointer to the header of the list
 * Return: the number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
