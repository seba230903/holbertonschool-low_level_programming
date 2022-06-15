#include "main.h"
/**
 * puts2 - prints characters
 * Description: prints every other character of a string, followed by a new line
 * @str: string
 */
void puts2(char *str)
{
	int i;
	int l; strlen(str);

	for (i = 0; i < l; i += 2)
		_putchar((str[i]));
	_putchar(10);
}
