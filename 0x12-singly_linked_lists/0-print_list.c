#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements
 * @h: pointer to list to print
 * Return: the printed number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (!h->str == NULL)
		(
			printf("[0] (nil)\n");
		)
		else
		(
		printf("[%u] %s\n", h->len, h->str);
		)
		h = h->next;
		count++;
	}
	return (count);
}
