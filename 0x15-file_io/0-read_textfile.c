#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
/**
 *read_textfile - it reads the text
 *@filename: First parameter indicating pointer to filename
 *@letters: Second parameter to count the number of letters
 *Return: returns the total read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	size_t num_read;
	FILE *fp;
	ssize_t total_read = 0;
	size_t bytes_written;

	if (filename == NULL)
	{
	return (0);
	}

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
	return (0);
	}

	buffer = (char *)malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
	fclose(fp);
	return (0);
	}

	while ((num_read = fread(buffer, sizeof(char), letters, fp)) > 0)
	{
	bytes_written = write(STDOUT_FILENO, buffer, num_read);
	if (bytes_written != num_read)
	{
	fclose(fp);
	free(buffer);
	return (0);
	}
	total_read += num_read;
	}

	fclose(fp);
	free(buffer);
	return (total_read);
}
