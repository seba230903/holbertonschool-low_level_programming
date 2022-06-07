#include <stdio.h>
/**
 * main - main
 * Description: print all hexadecimal numbers
 * Return: 0
 */
int main(void)
{
	int p;

	for (p = 48; p <= 57; p++)
		putchar(p);
	for (p = 97; p <= 102; p++)
		putchar(p);
	putchar(10);
	return (0);
}
