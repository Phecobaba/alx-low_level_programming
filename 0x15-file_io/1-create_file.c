#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 *create_file - Function that create file
 *@filename: Prameter for the filename
 *@text_content: Thecontent of the file name
 *DESCRIPTION: create_file, creates the file
 *RETURN: return value of create_file
 */
int create_file(const char *filename, char *text_content)
{

	int fd;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	}
	chmod(filename, mode);

	close(fd);

	return (1);
}

