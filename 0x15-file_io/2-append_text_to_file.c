#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file to append to
 * @text_content: The text content to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, Write, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		Write = write(fd, text_content, len);

		if (Write != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
