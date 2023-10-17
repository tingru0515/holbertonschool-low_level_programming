#include "main.h"
/**
* print_last_digit - print the last digit of a number
* @c:is the int that will use for the arcument of the function
* Return: 0
*/
int print_last_digit(int c)
{
	int last_digit;

	if (c < 0)
	{
		last_digit = (c % 10) * -1;
	}
	else
	{
		last_digit = c % 10;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
