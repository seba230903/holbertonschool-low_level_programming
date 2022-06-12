#include "main.h"
/**
 * print_triangle - prints a triangle
 * Description: prints a triangle, followed by a new line
 * @size: size
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= (size - a); b++)
				_putchar(' ');
			for (c = 1; c <= a; c++)
				_putchar('#');
			_putchar(10);
		}
	}
}
