#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the node 
 * @head: this is the first node
 * @index: node to return
 * Return: returns null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	if (temp && i < index)
	{
	temp = temp->next;
	i++;
	}

	return (temp ? temp : NULL);
}
