#include <stdio.h>
/**
 * main - main
 * Description: prints aphabet in lower case then in upper case
 * Return: 0
 */
int main(void)
{
	int p;

	for (p = 97; p <= 122; p++)
		putchar(p);
	for (p = 65; p <= 90; p++)
		putchar(p);
	putchar(10);
	return (0);
}
