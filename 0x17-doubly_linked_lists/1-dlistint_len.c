#include "lists.h"

/**
 * dlistint_len - Counts number of elements in linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: number of elements in linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
