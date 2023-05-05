#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - it converts binary to unsigned value
 * @b: pointer to integer
 * RETURN: returns either 0
 * or the result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = strlen(b);
	int i;

	if (b == NULL)
	return (0);

	for (i = 0; i < len; i++)
	{
	if (b[i] == '0')
	{
		result <<= 1;
	}
	else if (b[i] == '1')
	{
		result <<= 1;
		result |= 1;
	}
	else
	{
		return (0);
	}
	}

	return (result);
}
