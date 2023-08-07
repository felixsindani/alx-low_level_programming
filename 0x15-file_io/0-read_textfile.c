#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: letters to be read
 * Return: bytes read, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, b, a;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	a = read(fd, buffer, letters);
	b = write(STDOUT_FILENO, buffer, a);
	free(buffer);
	close(fd);
	return (b);
}
