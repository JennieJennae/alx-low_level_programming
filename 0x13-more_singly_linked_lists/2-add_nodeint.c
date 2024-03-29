#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of listint_t list.
 * @head: pointer to the address of the list head
 * @n: data for the new node to contain.
 *
 * Return: If function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
