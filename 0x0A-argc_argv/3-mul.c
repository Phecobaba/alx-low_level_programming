#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- Returns the parameter
 *@argc: Parameter that counts inputs
 *
 *@argv: Parameter that returns vector
 *
 *Return: Always Return Success
 *
 */
int main(int argc, char *argv[])
{


	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	exit(EXIT_SUCCESS);
}
