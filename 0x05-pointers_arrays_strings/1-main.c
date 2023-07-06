#include "main.h"
#include <stdio.h>
#include <limits>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;
	int INT_MAX, INT_MIN;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	min_max(INT_MAX, INT_MIN);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
