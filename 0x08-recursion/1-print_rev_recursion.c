#include "main.h"
/**
 *_print_rev_recursion- Prints the string recursively
 *@s: input
 *Always print (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{

		_print_rev_recursion(s + 1);
		_putchar(*s);

	}
}
