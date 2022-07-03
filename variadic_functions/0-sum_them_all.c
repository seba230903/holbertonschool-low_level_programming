#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums parameters
 * Description: returns the sum of all its parameters
 * @n: insigned int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
