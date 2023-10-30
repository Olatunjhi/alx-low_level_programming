#include "main.h"

/**
 * read_file - Reads the content of a file and returns the read data
 * @filename: The name of the file to read
 * @buffer: A buffer to store the read data
 * @buffer_size: The size of the buffer
 * Return: The number of bytes read on success, -1 on failure
 */
ssize_t read_file(const char *filename, char *buffer, size_t buffer_size)
{
	int source_fd = open(filename, O_RDONLY);

	if (source_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		return (-1);
	}

	ssize_t num_read = read(source_fd, buffer, buffer_size);

	close(source_fd);

	if (num_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		return (-1);
	}

	return (num_read);
}
