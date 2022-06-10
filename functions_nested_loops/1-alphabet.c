#include "main.h"
/**
 * main - main
 * Description: prints the alphabet followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
