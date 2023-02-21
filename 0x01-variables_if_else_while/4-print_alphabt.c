#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char pheco, e, q;

	e = 'e';
	q = 'q';

	for (pheco = 'a'; pheco <= 'z'; pheco++)
{
	if (pheco != e && pheco != q)

	putchar(pheco);

}
	putchar('\n');

	return (0);
}
