#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a linked listint_t list.
 * @h: head pointer
 *
 * Return: The number of nodes
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
