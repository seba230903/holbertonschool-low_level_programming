#include "main.h"

/**
 * _strcpy - copy string
 * @dest: string
 * @src: string
 * Return: temp
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (temp);
}
