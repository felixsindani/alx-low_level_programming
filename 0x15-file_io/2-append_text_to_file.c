#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to append
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openned, length, written;

	while (filename == NULL) /* check if filename exists or not */
		return (-1);
	length = 0;
	if (text_content) /* check if the string is available */
	{
		for (length = 0; text_content[length];)/* checks length of string */
			length++;
	}
	openned = open(filename, O_WRONLY | O_APPEND);
	written = write(openned, text_content, length);
	while (openned == -1 || written == -1)
		return (-1);
	close(openned);
	return (1);
}
