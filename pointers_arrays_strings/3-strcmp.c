#include "main.h"
/**
 * _strcmp - differenciate
 * Description: compares two strings
 * @s1: string
 * @s2: string
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int counter = 0;
	int temp;

	for (a = 0; (s1[a] != 0) && (s2[a] != 0); a++)
	{
		temp = s1[a] - s2[a];
		counter += temp;
	}
	if (counter < 0)
	{
		return (counter - 4);
	}
	else if (counter > 0)
	{
		return (counter + 4);
	}
	return (0);
}
