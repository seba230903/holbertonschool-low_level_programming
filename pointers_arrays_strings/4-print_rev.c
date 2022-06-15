#include "main.h"
#include <string.h>
/**
 * print_rev - prints string
 * Description: prints a string, in reverse, followed by a new line
 *@s: string
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int a = length - 1;

	while (a >= 0)
	{
		_putchar(*(s + a));
		a--;
	}
	_putchar(10);
}
