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
	unsigned int i, result = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}

	va_end(args);

	return (result);
}
