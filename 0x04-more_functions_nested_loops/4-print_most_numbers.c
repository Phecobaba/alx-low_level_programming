#include "main.h"

/**
 * print_most_numbers -> Prints numbers between 0 to 9
 * without printing 2 and 4
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || 1 == 4)
		{
			continue;
		}

		_putchar(i + '0');
	}

	_putchar('\n');
}
