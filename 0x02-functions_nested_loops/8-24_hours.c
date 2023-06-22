#include "main.h"

/**
 *jack_bauer - To print minutes from 00:00 to 23:59.
 *
 *Return: Always o.
 */


void jack_bauer(void)
{

int hour, minute;

for (hour = 0; hour <= 23; hour++)
{
for (minute = 0; minute <= 59; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}

}
