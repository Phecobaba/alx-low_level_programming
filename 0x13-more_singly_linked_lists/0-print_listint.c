#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
*print_listint - prints the element in a list
*@h: integer
*Return: returns an integer
*
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
