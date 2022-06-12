#include "main.h"
/**
 * print_diagonal - prints diagonaly
 * Description: draws a diagonal line on the terminal
 * @n: line
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(32);
			_putchar(92);
			_putchar(10);
		}
	}
}
