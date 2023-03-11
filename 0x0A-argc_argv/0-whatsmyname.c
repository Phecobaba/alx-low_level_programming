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

		int i;


		printf("argc = %d\n", argc);

		for (i = 0; i < argc; i++)
		{

		printf("argv[%d] = %s\n", i, argv[i]);

		}


		return (0);

}
