#include "main.h"

/**
 * create_file - creates new file
 * @filename: ptr to file name
 * @text_content: ptr of str to write to file
 * Return: 1 succesful, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length, a = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(fd, text_content, length);
	if (fd == -1 || a == -1)
		return (-1);
	close(fd);
	return (1);
}
