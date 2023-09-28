#include "main.h"
/**
 * _print_rev_recursion - function that print reversely output
 * @*s: pointer
 * @s: variable
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		if (*s == '\n')
		{
			_putchar(0);
		}
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

