#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to locate.
 *
 * Return: Null if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
