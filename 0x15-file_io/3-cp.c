#include "main.h"

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
