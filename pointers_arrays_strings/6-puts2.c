#include "main.h"
/**
 * puts2 - prints characters
 * Description: prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int a;
	int b = strlen(str);

	for (a = 0; a < b; a += 2)
		_putchar((str[a]));
	_putchar(10);
}
