#include "stdio.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *ph = "putchar";

	while (*ph)
	{
		_putchar(*ph);
		ph++;
	}
	_putchar('\n');

	return (0);
}
