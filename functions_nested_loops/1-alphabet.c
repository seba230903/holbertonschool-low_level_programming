#include "main.h"
/**
 * print_alphabet - print_alphabet
 * Description: prints the alphabet followed by a new line
 * Return: 0
 */
int print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar(10);
}
