#include "main.h"
/**
 * print_array - prints array
 * Description: prints elements of an array of integers, followed by a new line
 * @a: array
 * @n: num
 */
void print_array(int *a, int n)
{
	int i;
	int limit = n - 1;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < limit)
		{
			printf(", ");
		}
	}
	putchar(10);
}
