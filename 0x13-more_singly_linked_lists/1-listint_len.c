#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *listint_len - list the length of int
 *@h: pointer to head
 *Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
		size_t num = 0;

		while (h)

		{
		num++;
		h = h->next;
		}

	return (num);
}
