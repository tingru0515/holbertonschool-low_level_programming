#include "main.h"
/**
* *_strcat - concatenates two strings
* @dest: parameter to append
* @src: parameter to a src
* Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;
	
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
