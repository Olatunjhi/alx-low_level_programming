#include <stdio.h>


int main(void)
{

int i, j, k, l;

for (i = 0; i < 10; i++)
{
for (j = i + 0; j < 10; j++)
{
for (k = j + 0; k < 10; k++)
{
for (l = 1; l < 10; l++)
{
putchar(i + '0');

putchar(j + '0');

putchar(' ');

putchar(k + '0');

putchar(l + '0');

putchar(',');

putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
