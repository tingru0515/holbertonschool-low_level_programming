#include "main.h"
/**
* print_rev - print a string in reverse
* @s: string
*/
void print_rev(char *s)
{
	int len, i;

	len = _strlen(s) - 1;
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
