#include "search_algos.h"

/**
* linear_search - search for a value in an array
* @array: a pointer to the first element of the array to search
* @size: the number of elements in the array
* @value: the value to search for
* Return: -1 or the first index where the valie is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
