#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: pointer to the number whose bit needs to be cleared
 * @index: the index of the bit to be cleared
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);
	*n &= mask;
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	return (1);
}
