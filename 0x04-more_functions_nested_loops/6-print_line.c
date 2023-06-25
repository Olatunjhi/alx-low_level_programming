#include "main.h"

/**
 *print_line - To print line.
 *@n: integer n.
 *
 *Return: always 0.
 */


void print_line(int n)
{

char line;

for (line = 0; line < n; line++)
{
if (n <= 0)
{
	_putchar('\n');
}
	_putchar('_');
}
	_putchar('\n');
}
