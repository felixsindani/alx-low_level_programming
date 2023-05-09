#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: file name
 * @letters: letters is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_letters, write_letters;
	char *fp; /* pointer to file */

	fd = open(filename, O_RDONLY);
	if (fd == 1)
		return (0);
	fp = malloc(sizeof(char) * letters);
	read_letters = read(fd, fp, letters); /* read data from variable fp */
	write_letters = write(STDOUT_FILENO, fp, read_letters);
	free(fp); /* free memory of pointer */
	close(fd); /* close file after processing */
	return (write_letters);
}
