#include <stdio.h>
/**
* main - print letters from a to z then A to Z
*
* Description: using the main function
* this program prints "a to z and A to Z"
* Return: 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
