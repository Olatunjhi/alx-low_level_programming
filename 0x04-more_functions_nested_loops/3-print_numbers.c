#include "main.h"

/**
 *print_numbers - To print number from 0 to 9.
 *
 *Return: always o.
 */


void print_numbers(void)
{

	int number;

	for (number = 0; number <= 9; number++)
	{

	_putchar(number + '0');

	}

	_putchar('\n');
}
