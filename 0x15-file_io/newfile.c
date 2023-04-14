#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 *append_text_to_file - Function that appemds text to file
 *@filename: The file the file that contains the text
 *@text_content: The content of the file
 *Return: return -1 if appending is unsuccesful
 * and 1 if succesful
 */

int append_text_to_file(const char *filename, char *text_content) 
{
	int fd;
	FILE *file;

	fd = open(filename, O_WRONLY | O_APPEND);

	file = fdopen(fd, "a");
	
	fprintf(file, "%s", text_content);


	if (file == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
	ssize_t bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
	close(fd);
	return (-1);
	}
	else
		{
		close(fd);
		return (-1);
		}
		if (close(fd) == -1)
			return (-1);
	close(fd);
	}
	return (1);

}
