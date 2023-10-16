#include <stdio.h>
/**
* main - print alphabet letters
*
* Description: using the main function
* this program prints "alphabet letters"
* Return: 0
*/
int main(void)
{
	char c;
	for (c = 'a'; c <='z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
