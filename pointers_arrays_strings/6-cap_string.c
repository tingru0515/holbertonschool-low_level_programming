#include "main.h"
/**
* cap_string - capitalizes all words of a string
* @s: string
* Return: string
*/
char *cap_string(char *s)
{
	int i;
	int start = 1;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' 
				|| s[i] == ';' || s[i] == '.' || s[i] == '!' 
				|| s[i] == '?' || s[i] == '''' || s[i] == '(' 
				|| s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			start = 1;
		}
		else if ((s[i] >= 'A' && s[i] <= 'Z') || 
				(s[i] >= '0' && s[i] <= '9'))
		{
			start = 0;
		}
		else if (start == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= ' ';
			start = 0;
		}
	}
	return (s);
}
