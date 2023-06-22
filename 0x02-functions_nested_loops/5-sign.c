#include "main.h"


/**
 *print_sign - To check right value of n and print it to stdo.
 *@n: is parameter for the function print_sign.
 *
 *Return: always 0.
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}

}
