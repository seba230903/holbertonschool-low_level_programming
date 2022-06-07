#include <stdio.h>
/**
 * main - main
 * Description: prints alphabet backwards
 * Return: 0
 */
int main(void)
{
	char p;

	for (p = 'z'; p >= 'a'; p--)
		putchar(p);
	putchar('\n');
	return (0);
}
