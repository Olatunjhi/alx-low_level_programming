#include <stdio.h>
#include "main.h"

/**
 * main - Funtion that count for command line argument
 * @argc: argument count
 * @argv: argument velocity
 * @*argv[]: argument array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
