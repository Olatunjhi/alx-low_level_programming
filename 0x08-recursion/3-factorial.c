#include "main.h"
/**
 * factorial - function to print factorial of n number
 * @n: factorial function argument
 * Return: 1, -1 & factorial result
 *
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 1)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
