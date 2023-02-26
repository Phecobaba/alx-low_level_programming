#include "main.h"

/**
 * print_line -> Draws a straight line in the terminal
 * @n: number of time to print (_)
 *
 * Return: Nothing
 * if n = 0, prints new line (\n)
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}

		_putchar('-');
	}
	_putchar('\n');
}
