#include <stdio.h>


int main(void)
{

int i, j;

for (i = 0; i <= 2; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar(i + '0');

putchar(j + '0');

if (i == 2)
{
break;
}

putchar(',');

putchar(' ');
}
}

putchar('\n');

return (0);
}
