#include <stdio.h>
/**
 * main - main
 * Description: print all single digits combinations
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 56; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (a == 56 && b == 57)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
