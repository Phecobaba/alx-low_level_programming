#include "main.h"

/**
 * print_diagonal -> Draws diagonal line on the terminal
 * @n: number of times the character '\' is printed
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
