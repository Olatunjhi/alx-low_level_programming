#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("error\n");
		return (98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	int calc;
	calc = get_op_func(argv[2])(num1, num2);

	printf("%d\n", calc);

	return (0);
}
