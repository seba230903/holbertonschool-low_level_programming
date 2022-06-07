#include <stdio.h>
/**
 * main - main
 * Description: prints alphabet
 * Return: 0
 */
int main(void)
{
	int p;

	p = 97;
	while (p <= 122)
	{
		putchar(p);
		p = p + 1;
	}
	putchar(10);
	return (0);
}
