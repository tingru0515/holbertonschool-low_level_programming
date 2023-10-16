#include <stdio.h>
/**
* main - print single digit numbers
*
* Description: using the main function
* this program prints single numbers
* Return: 0
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
