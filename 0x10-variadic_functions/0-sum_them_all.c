#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - summation function
 * @n: mondatory parameter
 * @...: variable argument
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	int result = 0;

	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		result += value;
	}

	va_end(args);

	return (result);
}
