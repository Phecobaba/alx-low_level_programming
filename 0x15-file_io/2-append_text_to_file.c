#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"
#include <sys/stat.h>
#include <fcntl.h>
/**
 *
 *
 *
 *
 *
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content) {
    int fd;

    if (filename == NULL) {
        return -1;
    }

    fd = fopen(filename, O_WRONLY | O_APPEND);
    if (fd == NULL) {
        return -1;
    }

    if (text_content != NULL) {
        fprintf(fd, " %s", text_content);
        if (ferror(fd)) {
            fclose(fd);
            return -1;
        }
    }

    fclose(fd);
    return 1;
}
