#include "main.h"
/**
 * _memset - fills memory
 * Description: fills memory with a constant byte
 * @s: pointer
 * @b: char
 * @n: integer
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return(s);
}
