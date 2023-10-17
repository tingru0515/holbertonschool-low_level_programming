#include <stdio.h>
/**
* main - print text
*
* Return: 0
*/
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char putchar[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int c;

	for (c = 0; c < sizeof(putchar); c++)
	{
		_putchar(putchar[c]);
	}
	_putchar('\n');
	return (0);
}

