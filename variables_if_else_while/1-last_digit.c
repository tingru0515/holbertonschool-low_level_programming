#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - print if the last digit is greater than 5 or not
*
* Description: using main function
* this program prints "The Last digit is greater than 5 or not"
* Return: 0
*/
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	a = n % 10;
	printf("Last digit of %i is %i ", n, a);
	if (a > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (a == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
