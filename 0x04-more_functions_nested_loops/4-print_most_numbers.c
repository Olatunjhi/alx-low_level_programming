#include "main.h"

/**
 *print_most_numbers - To print 0 to 9 and skip 4 and 5.
 */


void print_most_numbers(void)
{

	int number;

	for (number = 0; number <= 9; number++)
	{

		if (number == 2 || number == 4)
		{
			continue;
		}

		_putchar(number + '0');
	}

	_putchar('\n');
}
