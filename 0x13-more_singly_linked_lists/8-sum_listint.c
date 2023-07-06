#include "lists.h"

/**
 * sum_listint - Calculates the sum of all data (n).
 * @head: A pointer to the head of the listint_t.
 *
 * Return: resulting sum
 *         Otherwise 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
