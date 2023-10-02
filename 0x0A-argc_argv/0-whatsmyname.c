#include "main.h"

/**
 * main - main function .
 * @argc: argument count
 * @*argv[]: argument velocity.
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	char *arg = argv[0];

	for (int i = 0; arg[i] != '\0'; i++)
	{
		_putchar(arg[i]);
	}

	_putchar('\n');
	return (0);
}
