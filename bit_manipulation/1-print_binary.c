#include "main.h"
/**
 * print_binary - prints int in bin
 * Description: prints the binary representation of a number
 * @n: int
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = 0;
	unsigned long int i = 63;
	unsigned long int j = 0;

	while (i--)
	{
		x = n >> i;
		if (x & 1)
		{
			putchar('1');
			j++;
		}
		else if (j)
			putchar ('0');
	}
	if (!j)
		putchar('0');
}
