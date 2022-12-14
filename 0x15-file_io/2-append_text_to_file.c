#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end
 * @filename: the name of the file
 * @text_content: the NULL terminateed string to add at the end of the file
 * Return: On success, 1 (if the file exists)
 *          On failure -1 (if the file does not exist
 *          Or you don't have the required file permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
int o, w, strlen;

strlen = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[strlen])
strlen++;
}

o = open(filename, O_RDWR | O_APPEND);
w = write(o, text_content, strlen);

if (o == -1 || w == -1)
return (-1);

close(o);
return (1);
}
