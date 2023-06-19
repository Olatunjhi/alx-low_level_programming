#include <stdio.h>


int main(void)
{
int i;
char c;
float f;
double d;

printf("size of a char: %d byte(s)\n", sizeof(c));

printf("size of a int: %d byte(s)\n", sizeof(i));

printf("size of a float: %d byte(s)\n", sizeof(f));

printf("size of a double: %d byte(s)\n", sizeof(d));

return (0);
}
