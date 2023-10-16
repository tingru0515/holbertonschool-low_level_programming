#include <stdio.h>
/**
* main - printing all combination of numbers
*
* Description: using main function
* this program prints all combination of numbers
* Return: 0
*/
int main(void)
{
	int c;

	for (c = 48; c <=57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
