#include "main.h"
/**
* _isalpha - check if it is letter or not
* @c: is the int that will use for the argument of the function
* Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
