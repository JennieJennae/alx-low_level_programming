#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at end of linked list
 * @head: pointer to head of a linked list
 * @n: The integer
 *
 * Return: If function fails - NULL.
 *         Otherwise - the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
