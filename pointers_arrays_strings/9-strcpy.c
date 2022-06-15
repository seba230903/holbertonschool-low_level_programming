#include "main.h"
/**
 * _strcpy - copy string
 * Description: copies string pointed to by src, to dest
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
