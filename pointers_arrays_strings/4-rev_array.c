#include "main.h"
/**
 * reverse_array - reverses
 * Description: reverses the content of an array of integers
 * @a: array
 * @n: num
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int limit = (n + 1) / 2;
	int j = n - 1;

	for (i = 0; i < limit; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}
