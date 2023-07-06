#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If function fails - 0.
 *         Otherwise - The head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (*head == NULL)
		return (0);

	tmp = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (num);
}
