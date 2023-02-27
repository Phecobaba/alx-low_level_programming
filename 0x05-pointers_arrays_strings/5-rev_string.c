#include "main.h"

/**
 * rev_string -> reverses a string
 * @s: the string to be reversed
 *
 * Return: Nothing;
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char new;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len--)
	{
		new = s[i];
		s[i++] = s[len];
		s[len] = new;
	}
}
