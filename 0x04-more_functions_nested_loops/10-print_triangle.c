#include "main.h"

/**
 * print_triangle -> Prints a triangle
 * @size: the size of the triangle
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i = 0, j = 0, k = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(32);
			}

			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

