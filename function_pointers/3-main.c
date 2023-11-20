#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - prints the result of simple operations
* @argc: the number of arguments
* @argv: an array of pointers
* Return: 0
*/
int main(int argc, char *argv[])
{
	int result;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = op(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
