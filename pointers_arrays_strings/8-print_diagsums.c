#include "main.h"
/**
 * print_diagsums - prints sum of diagonals
 * Description: sum of the two diagonals of a square matrix of integers
 * @a: pointer
 * @size: int
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int r1 = 0;
	int r2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				r1 = r1 + (*((int *)a + i * size + j));
			if (j == (size - 1 - i))
				r2 = r2 + (*((int *)a + i * size + j));
		}
	}
	printf("%d, %d\n", r1, r2);
}
