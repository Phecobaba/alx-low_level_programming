#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 *
 *
 *
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content) {
    	FILE* fd;
	
	fd = fopen(filename, "a");
	fprintf(fd, " %s", text_content);
	
	if (filename == NULL)
	{
		return (-1);
	}
	if (fd == -1)
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
