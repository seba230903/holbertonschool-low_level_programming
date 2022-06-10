#include "main.h"
/**
 * print_alphabet - prints alphabet
 * Description: prints the alphabet followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
