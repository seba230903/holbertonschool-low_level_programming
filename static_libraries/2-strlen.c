#include "main.h"

/**
 * _strlen - lenght of string
 * @s: string
 * Return: check
 */

int _strlen(char *s)
{
	int i = 0;
	char check = 0;

	do {
		check = *(s + i);
		i++;
	} while (check != '\0');
	return (--i);
}
