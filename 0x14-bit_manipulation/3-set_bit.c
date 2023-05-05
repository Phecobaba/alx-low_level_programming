#include <stdio.h>
/**
 * set_bit - set the value
 * @n: pointer to integer
 * @index: second parameter
 * Return: return 1 if succesful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= (1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	else
	{
		return (1);
	}
	return (1);
}
