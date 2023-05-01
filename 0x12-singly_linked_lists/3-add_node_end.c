#include <stdlib.h>
#include "lists.h"
/**
 * free_list - responsible for freeing a linked list
 * @head: freed list_t
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
	}
}
