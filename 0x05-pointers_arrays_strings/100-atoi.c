#include "main.h"

/**
 * _atoi -> Converts Strings to Integers
 * @s: The string for conversion
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char nullFlag = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			nullFlag = 1;
			total = total * 10 + *s - '0';
		}
		else if (nullFlag)
		{
			break;
		}
		s++;
	}

	if (sign < 0)
	{
		total = (-total);
	}

	return (total);
}

