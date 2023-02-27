#include "main.h"

/**
 * puts2 -> Prints every other character of a string starting from the first
 * character, followed by a new line
 * @str: the sting
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;

	for (i = 0; i <= len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
