#include <stdio.h>

/**
 * print_binary - returns the binary
 * @n: usigned integer
 */

void print_binary(unsigned long int n)
{

	if (n > 1)
	{
	print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}
