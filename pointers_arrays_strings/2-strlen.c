#include "main.h"
/**
 * _strlen - returns the length of a string
 * Description: returns the length of a string
 * @s: string
 * Return: check
 */
int _strlen(char *s)
{
	int a = 0;
	char check = 0;

	do {
		check = *(s + a);
		a++;
	} while (check != '\0');
	return (--a);
}
