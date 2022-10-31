#ifndef MAIN_H
#define MAIN_H

/*main.h -contains function prototypes for all functions in this directory*/

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *textcontent);
int append_text_to_file(const char *filename, char *textcontent);

#endif
