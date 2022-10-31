#include "main.h"
#include <stdlib.h>

char *create_buffer(char *filename);
void close_file(int fd);


/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * buffer contains the read data of filename
 * @filename: The name of the file buffer is storing read data
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}


/**
 * close_file - closes file descriptors
 * @fd: The file descriptor to be closed
 * Return: Nothing
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - Copies the contents of a file to another file.
 * @argc: argument count
 * @argv: argument vector(array of pointers to the arguments)
 * Return: On success, 1
 * If the number of argument is not correct - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written into - exit code 99.
 * If file descriptor cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(to, buf, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buf);
	close_file(from);
	close_file(to);

	return (0);
}
