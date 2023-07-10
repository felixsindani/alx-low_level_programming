#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: file being read
 * @letters: no. of letters to be read
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, r;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(fd);
	return (w);
}
