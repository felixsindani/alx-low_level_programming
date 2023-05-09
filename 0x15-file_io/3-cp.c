#include "main.h"

/**
 * main - function that copies content of file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 always success
 * if count is incorrect: exit code 97
 */
int main(int argc, char *argv[])
{
	int old, new, reading, writting;
	char *fp;

	while (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp = create_buffer(argv[2]); /* stores arguments in pointer */
	old = open(argv[1], O_RDONLY);
	reading = read(old, fp, 1024);
	new = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (old == -1 || reading -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(fp);
			exit(98);
		}
		writting = write(new, fp, reading);
		if (new == -1 || writting == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(fp);
			exit(99);
		}
		reading = read(old, fp, 1024);
		new = open(argv[2], O_WRONLY | O_APPEND);
		/* open write only file then append text */
	} while (reading > 0);
	free(fp);
	close_file(old);
	close_file(new);
	return (0);
}

/**
 * close_file - close file descriptor
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int var;

	var = close(fd); /* closes file-descriptor function*/
	if (var == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buffer - allocate 1024 memory bytes to buffer
 * @filename: filename
 * Return: pointer to buffer
 */
char *create_buffer(char *filename)
{
	char *fp;

	fp = malloc(sizeof(char) * 1024);
	/* allocating 1024 bytes for pointer to filename*/
	if (!fp)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fp);
}
#include <sys/types.h>
#include <sys/stat.h>

__attribute__((constructor)) void checker_constructor(void)
{
	umask(0);
}
