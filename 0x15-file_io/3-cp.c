#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024
/**
 *
 *
 *
 *
 *
 *
 */

void print_error(const char *message, const char *arg) {
    dprintf(STDERR_FILENO, message, arg);
}

	char *file_from = argv[1];
    	char *file_to = argv[2];

	int fd_from,  fd_to;

	char buffer[BUFFER_SIZE];
    	ssize_t read_bytes, write_bytes;	

int main(int argc, char **argv) 
{
    if (argc != 3) {
        print_error("Usage: cp file_from file_to\n", "");
        exit(97);
    }


    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_error("Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1) {
        print_error("Error: Can't write to %s\n", file_to);
        exit(99);
    }


    while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        write_bytes = write(fd_to, buffer, read_bytes);
        if (write_bytes != read_bytes) {
            print_error("Error: Can't write to %s\n", file_to);
            exit(99);
        }
    }

    if (read_bytes == -1) {
        print_error("Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    if (close(fd_from) == -1) {
        print_error("Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1) {
        print_error("Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return 0;
}

