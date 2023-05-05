#include <stdio.h>
#include "main.h"
/**
 * get_bit - get's the bit
 * @n: first parameter
 * @index: the bit you want to get
 * Return: return 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	return ((n & mask) != 0);
}
