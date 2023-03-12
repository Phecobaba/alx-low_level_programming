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
	while (argc--)
	printf("%s\n", *argv++);

	return (0);
}
