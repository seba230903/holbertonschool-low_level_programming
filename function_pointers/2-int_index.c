#include "function_pointers.h"
/**
 * int_index - searches for integer
 * Description: searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
