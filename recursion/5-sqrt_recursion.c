#include "main.h"
/**
 * _sqrt_recursion - square root
 * Description: returns the natural square root of a number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0 && n % 2 != 0)
		return (-1);
	else if (n == 0)
		return (n);
	else
		return (sqrt_check(n, 0));
}
/**
* sqrt_check - checks sqrt of n
* @n: int
* @i: int
*Return: int
*/
int sqrt_check(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrt_check(n, i + 1));
}
