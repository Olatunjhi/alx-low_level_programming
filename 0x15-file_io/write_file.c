#include "main.h"

/**
 * write_file - Writes data to a file
 * @filename: The name of the file to write to
 * @data: The data to write
 * @data_size: The size of the data
 * Return: 0 on success, otherwise an error code
 */
int write_file(const char *filename, const char *data, size_t data_size)
{
	int dest_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (dest_fd == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", filename);
		return (99);
	}

	ssize_t num_written = write(dest_fd, data, data_size);

	close(dest_fd);

	if (num_written != data_size)
	{
		dprintf(2, "Error: Can't write to file %s\n", filename);
		return (99);
	}

	return (0);
}
