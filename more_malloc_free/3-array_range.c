#include "main.h"
/**
 * array_range - create array
 * Description: creates an array of integers
 * @min: int
 * @max: int
 * Return: int
 */
int *array_range(int min, int max)
{
	int i;
	int j = 0;
	int *p;

	if (min > max)
		return (0);
	p = malloc(sizeof(int) * (max - min) + 4);
	if (p == NULL)
		return (0);
	for (i = min; i <= max; i++, j++)
		p[j] = i;
	return (p);
}
