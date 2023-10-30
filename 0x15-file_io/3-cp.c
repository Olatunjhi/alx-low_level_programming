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
	ssize_t num_read;

	int source_fd = open(filename, O_RDONLY);

	if (source_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		return (-1);
	}

	num_read = read(source_fd, buffer, buffer_size);

	close(source_fd);

	if (num_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		return (-1);
	}

	return (num_read);
}

/**
 * write_file - Writes data to a file
 * @filename: The name of the file to write to
 * @data: The data to write
 * @data_size: The size of the data
 * Return: 0 on success, otherwise an error code
 */
int write_file(const char *filename, const char *data, size_t data_size)
{
	ssize_t num_written;

	int dest_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (dest_fd == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", filename);
		return (99);
	}

	num_written = write(dest_fd, data, data_size);

	close(dest_fd);

	if (num_written != (ssize_t)data_size)
	{
		dprintf(2, "Error: Can't write to file %s\n", filename);
		return (99);
	}

	return (0);
}

/**
 * main - main function
 * @ac: command line
 * @av: command line
 *
 * Return: zeroe (0)
 */
int main(int ac, char **av)
{
	char buffer[1024];
	ssize_t num_read;
	int result;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		return (97);
	}

	num_read = read_file(av[1], buffer, sizeof(buffer));

	if (num_read == -1)
	{
		return (98);
	}

	result = write_file(av[2], buffer, num_read);

	if (result != 0)
	{
		return (result);
	}

	return (0);
}
