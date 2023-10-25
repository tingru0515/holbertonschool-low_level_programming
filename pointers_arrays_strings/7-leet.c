#include "main.h"
/**
* leet - encode a  string to 1337
* @str: the string
* Return: character
*/
char *leet(char *str)
{
	int i1 = 0, i2;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i1])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (str[i1] == leet[i2] || str[i1] - 32 == leet[i2])
			{
				str[i1] = i2 + '0';
			}
		}

		i1++;
	}

	return (str);
}
