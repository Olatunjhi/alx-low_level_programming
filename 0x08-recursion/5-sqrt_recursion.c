#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - entery level function
 * @n: parameter
 * Return: calculation function
 *
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculation function for square root
 * @i: iteration
 * @n: number we want to find it square root
 * Return: -1, i & recalling the function
 *
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}
