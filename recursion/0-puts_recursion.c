#include "main.h"
/**
 * _puts_recursion - puts using recursion
 * Description: prints a string, followed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar(10);
}
