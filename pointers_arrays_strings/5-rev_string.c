#include "main.h"
/**
 * rev_string - reverses a string
 * Description: reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int a = length - 1;
	int b;
	char temp;

	for (a = 0; a < length / 2; a++)
	{
		temp = s[a];
		s[a] = s[b];
		s[b--] = temp;
	}
}
