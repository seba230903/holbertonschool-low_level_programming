#include "main.h"
/**
 * print_sign - prints the sign of a number
 * Description: prints sign of a number
 * @n: num to check
 * Return: 1 if positive, 0 if zero or -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
