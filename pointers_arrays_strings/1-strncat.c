#include "main.h"
/**
 * _strncat - concatenates
 * Description: concatenates two strings
 * @dest: string
 * @src: string
 * @n: num
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destTotalChars = strlen(dest);
	int totalChars = destTotalChars + (strlen(src));
	int a;
	int b = 0;

	for (a = destTotalChars; b < n && a < totalChars; a++)
	{
		dest[a] = src[b];
		b++;
	}
	return (dest);
}
