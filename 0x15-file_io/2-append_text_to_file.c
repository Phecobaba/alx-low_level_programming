#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content) {
    FILE *fp;
    int result;

    if (filename == NULL) {
        return -1;
    }

    if (text_content == NULL) {
        return 1;
    }

    fp = fopen(filename, "a");
    if (fp == NULL) {
        return -1;
    }

    result = fprintf(fp, "%s", text_content);
    fclose(fp);

    if (result < 0) {
        return -1;
    }

    return 1;
}
