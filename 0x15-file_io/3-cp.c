#include "main.h"

/**
 * make_buffer - create 1024 bytes for buffer
 * @file_name: file buffer is holding chars for
 * Return: ptr to new buffer
 */
char *make_buffer(char *file_name);

char *make_buffer(char *file_name)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
	}
	return (buf);
}

/**
 * close_fd - closes fd
 * @fd: file descriptor
 */
void close_fd(int fd)
{
	int a;

	a = close(fd);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - main prog
 * @ac: argument count
 * @av: arguments supplied
 * Description:ac is incorrect- exit code 97
 * fail to close file - exit code 100
 * fail to create file - exit code 99
 * file does not exist - cose 98
 * Return: 0 success
 */
int main(int ac, char *av[])
{
	int read_file, write_file, from, to;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage:cp file-from file_to\n");
		exit(97);
	}
	buf = make_buffer(av[2]);
	from = open(av[1], O_RDONLY);
	read_file = read(from, buf, 1024);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", av[1]);
			free(buf);
			exit(98);
		}
		write_file = write(to, buf, read_file);
		if (to == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", av[2]);
			free(buf);
			exit(99);
		}
		read_file = read(from, buf, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);
	} while (read_file > 0);
	free(buf);
	close_fd(from);
	close_fd(to);
	return (0);
}
