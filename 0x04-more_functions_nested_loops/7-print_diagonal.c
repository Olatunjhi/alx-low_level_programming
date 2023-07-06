#include "main.h"


void print_diagonal(int n)
{

char i;
char j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < n; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}
