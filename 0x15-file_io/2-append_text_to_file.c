#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
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
	if (fd == -1)
	{
	perror("open");
	return (-1);
	}
	file = fdopen(fd, "a");
	if (file == NULL)
	{
	perror("fdopen");
	close(fd);
	return (-1);
	}
	if (text_content != NULL)
	{
	fprintf(file, "%s", text_content);
	}
	if (fclose(file) != 0)
	{
	perror("fclose");
	return (-1);
	}
	return (1);
}
