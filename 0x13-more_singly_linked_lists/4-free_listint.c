#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - to free list
 * @head: listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
