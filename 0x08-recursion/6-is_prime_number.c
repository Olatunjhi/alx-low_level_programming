#include "main.h"

int prime_number(int n, int i);

/**
 * is_prime_number - entry point function
 * @n: function parameter
 * Return: function that get for prime number
 *
 */

int is_prime_number(int n)
{
	return (prime_number(n, 1));
}

/**
 * prime_number - This function check for prime number
 * @n: function parameter
 * @i: iteration
 * Return: 0, 1 & recalling the function
 *
 */

int prime_number(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n % i == 0 && i > 1)
	{
		return (0);
	}

	if ((n / i) < i)
	{
		return (1);
	}

	return (prime_number(n, i + 1));
}
