#include "main.h"

/**
 * _strcpy -> copies string pointed to by 'src' to buffer includeing
 * NULL character
 * @dest: location copied to
 * @src: location copied from
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';

	return (dest);
}

