#include "main.h"
/**
* _strlen - return the length of a string
* @s: variable being evaluated
* 
* Return: 0
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
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
