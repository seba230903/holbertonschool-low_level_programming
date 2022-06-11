#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * Description: computes the absolute value of an integer
 * @n: num to check
 * Return: absolute value of int
 */
int _abs(int n)
{
	if (n == 0)
		return (0);
	if (n > 0)
		return (n);
	return (n * -1);
}
