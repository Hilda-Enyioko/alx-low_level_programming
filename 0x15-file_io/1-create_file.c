#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: On success, 1
 *         On failure, -1(if file cannot be created,
 *                         file cannot be written,
 *                         write fails, etc.)
 */

int create_file(const char *filename, char *text_content)
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
  
o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, text_content, strlen);

if (o == -1 || w == -1)
return (-1);

close(o);
return (1);
}
