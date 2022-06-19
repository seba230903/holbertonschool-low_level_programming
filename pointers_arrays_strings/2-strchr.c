#include "main.h"
/**
 * _strchr - locates character
 * Description: locates a character in a string
 * @s: pointer
 * @c: chr
 * Return: pointer to c or null
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *j;

	for (i = 0; s[i] != '\0' && s[i] != c; i++)
	if (s[i] == c)
		j = &s[i];
	else
		j = '\0';
	return (j);
}
