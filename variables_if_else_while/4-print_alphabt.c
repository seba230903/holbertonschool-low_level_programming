#include <stdio.h>
/**
 * main - main
 * Description: print alphabet except e and q
 * Return: 0
 */
int main(void)
{
	int p;

	for (p = 97; p <= 122; p++)
		if (p != 101 && p != 113)
			putchar(p);
	putchar(10);
	return (0);
}
