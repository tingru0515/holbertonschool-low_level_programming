#include <stdio.h>
/**
* main - print single digit numbers
*
* Description: using the main function
* this program prints single numbers
* return: 0
*/
int main(void)
{
	char c;

	for (c = '0'; c < '10'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
