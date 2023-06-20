#include "main.h"

/**
 *print_alphabet - To print alphabet in lowercase to stdo.
 *
 *Return: always success o.
 */

void print_alphabet(void)
{

int alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');

}
