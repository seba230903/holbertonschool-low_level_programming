#include "main.h"
/**
 * is_prime_number - check for prime number n
 * @n: num
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime(n / n));
}

/**
 * prime - checks for prime number
 * @i: num
 * Return: int
 */

int prime(int i)
{
	if (i == 1)
		return (1);
	else
		return (0);
}
