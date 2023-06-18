#include <stdio.h>


int main(void)
{

int number;

for (number = 0; number < 9; number++)
{
putchar(number + '0');

putchar(',');

putchar(' ');
}

putchar('\n');

return (0);
}
