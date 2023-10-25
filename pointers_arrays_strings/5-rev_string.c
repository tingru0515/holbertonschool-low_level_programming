#include "main.h"
/**
* _strlen - return the length of a string
* @s: variable
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
* rev_string - reverse a string
* @s: string
*/
void rev_string(char *s)
{
	int i, len, tmp;

	len = _strlen(s) - 1;
	for (i = 0; i < (len / 2); i++)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
	}
}
