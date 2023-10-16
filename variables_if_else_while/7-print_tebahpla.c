#include <stdio.h>
/**
* main - print alphabet in reverse
*
* Description: using the main function
* this program prints alphabet in reverse
* Return: 0
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
