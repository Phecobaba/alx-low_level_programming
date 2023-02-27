#include "main.h"

/**
 * _strlen -> finds length of string
 * @s: the string
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
