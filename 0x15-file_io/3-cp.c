#include "main.h"
#include <stdio.h>
/**
 * create_buffer - creates buffer with 1024bytes
 * @flename: filename
 * Return: pointer to created buffer
 */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * close_fd - closes fd
 * @fd: fd to be closed
 */
void close_fd(int fd)
{
	int a;

	a = close(fd);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy content of file to another
 * @argc: arguments supplied
 * @argv: Array of pointers to arguments
 * Return: 0 Success
 * Description: exit code 97 - file does not exit
 * exit code 98 - file does not read/exit
 * exit code 99 - file not created/written
 * exit code 100 - file not closed
 */
int main(int argc, char *argv[])
{
	int from, to, w, r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (r > 0);
	free(buffer);
	close_fd(from);
	close_fd(to);
	return (0);
}
