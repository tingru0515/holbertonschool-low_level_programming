#include "main.h"
#include <stdio.h>
/**
* print_sign - print the sign of a number
* @n: is the int that will use for the argument of the function
* Return: 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return(1);
		printf("+");
	}
	else if (n == 0)
	{
		return(0);
		printf("0");
	}
	else
	{
		return(-1);
		printf("-");
	}
}
