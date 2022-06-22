#include "main.h"

/**
 * _strchr - cut string at c
 * @s: string
 * @c: character
 * Return: string
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}
