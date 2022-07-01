#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - array iterator
 * Description: executes a function given
 *as a parameter on each element of an array
 * @array: array
 * @size: size
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action && size > 0)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
