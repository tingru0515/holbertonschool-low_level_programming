#include "main.h"
/**
* flip_bits - returns the number of bits you would need to flip
* @n: unsigned long int
* @m: unsigned long int
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t;
	unsigned int count = 0;

	t = n ^ m;
	while (t > 0)
	{
		count += t & 1;
		t >>= 1;
	}
	return count;
}
