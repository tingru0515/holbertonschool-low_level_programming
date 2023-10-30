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
