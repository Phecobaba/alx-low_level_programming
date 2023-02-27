#include <stdio.h>

/**
 *main -> Prints the numbers 1 to 100
 *But prints 'Fizz' for multiples of 3, 'Buzz'
 *for multiles of 5, and 'FizzBuzz' for both multiples of 3 and 5
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		} else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
