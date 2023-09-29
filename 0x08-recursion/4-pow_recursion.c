#include "main.h"
/**
 * _pow_recursion - Function to print exponent of number
 * @y: secomd argument in prototype
 * @x: first argument in prototype
 * Return: -1, 1 & function result
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}
