#include <stdio.h>
/**
* main - print alphabets letters except q and e
*
* Description: using the main function
* this program prints all letters except q and e
* Return: 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
