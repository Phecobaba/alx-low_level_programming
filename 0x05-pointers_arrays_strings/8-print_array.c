#include "main.h"
#include <stdio.h>

/**
 * print_array -> Prints 'n' elements of an array followed by a new line
 * @a: The array passed
 * @n: The number of elements in array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
