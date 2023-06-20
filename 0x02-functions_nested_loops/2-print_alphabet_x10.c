#include "main.h"


/**
 *print_alphabet_x10 - To print lowercase alphabet to stdo.
 *
 *Return: always 0.
 */

void print_alphabet_x10(void)
{

int alphabet_x10;
int line_10;

for (line_10 = 0; line_10 < 10; line_10++)
{
for (alphabet_x10 = 'a'; alphabet_x10 <= 'z'; alphabet_x10++)
{
_putchar(alphabet_x10);
}
_putchar('\n');
}

}
