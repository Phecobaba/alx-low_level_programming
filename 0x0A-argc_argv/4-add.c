#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main -> multiplies two numbers
 * @argc: Argument Count
 * @argv: Agument Vector
 *
 * Return: 1 if no argument, and 0 otherwise
 */

int main(int argc, char *argv[])
{

	int i = 0;

	int num;

				

	while (argc <= 0)
	
		printf("%d\n", i);
							
	if ( argc != num)

		{

		printf("Error\n");

		return (1);

		}
	
	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
	

	exit(EXIT_SUCCESS);
}
