#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writ, length;

	while (filename == NULL)
		return (-1);
	length = 0;
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writ = write(fd, text_content, length);

	if (fd == -1 || writ == -1)
		return (-1);
	close(fd);
	return (1);
}
