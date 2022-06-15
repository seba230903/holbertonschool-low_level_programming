#include "main.h"
/**
 * puts_half - prints half of a string
 * Description: prints half of a string, followed by a new line
 * @str: string
 */
void puts_half(char *str)
{
	int length_of_the_string = strlen(str);
	int n;

	if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string) / 2;
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
	}
	for (n++; n < length_of_the_string; n++)
	{
		putchar(str[n]);
	}
	putchar(10);
}
