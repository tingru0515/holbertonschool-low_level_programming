#include "main.h"
/**
* print_last_digit - print the last digit of a number
* @c:is the int that will use for the arcument of the function
* Return: 0
*/
int print_last_digit(int c)
{
	if (c >= 10)
	{
		_putchar(c % 10);
	}
	else if (c >= 0 && c < 10)
	{
		_putchar(c);
	}
	else
	{
		_putchar((c * -1) % 10);
	}
}
