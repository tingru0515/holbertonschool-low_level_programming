#include "main.h"
/**
* *_strcpy - copies the string pointed to by src
* @dest: a buffer to copy the string to
* @src: the source string to copy
*
* Return: dest
*/
char *_strcpy(char *dest, const char *src)
{
	int index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
