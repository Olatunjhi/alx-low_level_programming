#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - is function that print string with char pointer.
 * @*s: is argument that hold string.
 * @s: is variable
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		if (*s == ' ')
		{
			_putchar(' ');
		}
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
