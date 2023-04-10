#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"
/**
 *create_file - a new file with the specified name
 * @filename: The name of the file to create.
 *@text_content: content of the file
 *Descriiption: create_file, creates the file
 *RETURN: return create_file
 */
int create_file(const char *filename, char *text_content)
{

	int fd;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}


	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
	{
	return (-1);
	}

	chmod(filename, mode);

	if (text_content != NULL)
	{

	ssize_t bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
	close(fd);
	return (-1);
	}
	}
	return (1);
}

