#include "main.h"
/**
* *string_toupper - changes all lowercase letters of a string to uppercase
* @s: string being altered
* Return: string
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= ' ';
		}
	}
	return (s);
}
