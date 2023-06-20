#include <stdio.h>


void print()
{

const char* str = "_putchar";
int i;

for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
}

int main(void)
{

print();
putchar('\n');

return (0);
}
