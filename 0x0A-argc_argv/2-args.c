#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints all arguments its receive
 * @argc: argument count
 * @argv: argument velocity
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
