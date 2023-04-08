#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *read_textfile - A function that reads the text in a file
 *@filename: this is a pointer to the filename of type char
 *@letters: This prints the number of of letters in the text
 *
 *Descriiption: read_textfile, rads the content of the file
 *Return: returns the total read
 */
ssize_t read_textfile(const char *filename, size_t letters)
	{
		FILE *fp;
		char *buffer;
		size_t num_read;
		ssize_t total_read = 0;


		fp = fopen(filename, "r");

		if (!fp)
		{
			return (0);
		}
		if (fp == NULL)

		{
			return (0);
		}
		buffer = (char *)malloc(letters * sizeof(char));
		while ((num_read = fread(buffer, sizeof(char), letters, fp)) > 0)
		{
			total_read += num_read;

		printf("%.*s", (int)num_read, buffer);
		}

		free(buffer);
		fclose(fp);
		return (total_read);
	}
