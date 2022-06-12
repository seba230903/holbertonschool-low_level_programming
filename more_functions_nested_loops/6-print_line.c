#include "main.h"
/**
 * print_line - draws line
 * Description: draws a straight line in the terminal
 * @n: length of line
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (a = 0; a < n; a++)
			_putchar('_');
		_putchar(10);
	}
}
