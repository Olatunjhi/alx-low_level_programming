#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - To print number with separator
 * @separator: function parameter
 * @n: function parameter
 * @...: variadic function parameteter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char space = ' ';

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		if (value != n)
		{
			printf("%d", value);

			if (i < n - 1)
			{
				printf("%s ", separator);
			}
		}
	}

	printf("\n");
	va_end(args);
}
