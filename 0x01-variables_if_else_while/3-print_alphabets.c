#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char j;

	for (j = 'A'; j <= 'Z'; ++j)
	putchar(j);

	/* for small letters */
	for (j = 'a'; j <= 'z'; ++j)
	putchar(j);
	putchar('\n');
	return (0);
}
