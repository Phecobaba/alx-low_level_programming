#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list*
 * Return: returns num
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

	while (!head || !*head)
	return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

