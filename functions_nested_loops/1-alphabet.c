#include "main.h"
/**
 * main - main
 * Description: prints the alphabet followed by a new line
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
