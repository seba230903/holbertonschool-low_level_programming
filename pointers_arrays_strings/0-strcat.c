#include "main.h"
/**
 * _strcat - concatenates two strings
 * Description: concatenates two strings
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int destTotalChars = strlen(dest);
	int totalChars = destTotalChars + (strlen(src));
	int a;
	int b = 0;

	for (a = destTotalChars; a < totalChars; a++)
	{
		dest[a] = src[b];
		b++;
	}
	return (dest);
}
