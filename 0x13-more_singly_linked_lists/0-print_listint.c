#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure print_listint
 */
size_t print_listint(const listint_t *h)
{
	 size_t num = 0;

	while (h)

	{

	printf("%d\n", h->n);

	num++;
	h = h->next;
	}

	return (num);
}
