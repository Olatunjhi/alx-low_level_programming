#include "main.h"
/**
 * _strlen_recursion - Function that print length of a string
 * @*s: pointer
 * @s: variable
 * Return: 0 and length of string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 +
		_strlen_recursion(s + 1));
	}

	_putchar('\n');
}
