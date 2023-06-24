#include "main.h"

/**
 *more_numbers - To print 0 to 14 in 10 lines.
 *
 *Reaturn: always 0.
 */


void more_numbers(void)
{

	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 15; j++)
	{
	if (j < 10)
	{
	_putchar(j + '0');
	}
	else
	{
	_putchar('1');
	_putchar((j - 10) + '0');
	}
	}
	_putchar('\n');
	}
}
