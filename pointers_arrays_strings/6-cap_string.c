#include "main.h"
/**
 * cap_string - capitalize
 * Description: capitalizes all words of a string
 * @str: string
 * Return: str
 */
char *cap_string(char *str)
{
	int a, b;
	int prev;
	char prohibited[13];

	prohibited[0] = ' ';
	prohibited[1] = '	';
	prohibited[2] = '\n';
	prohibited[3] = ',';
	prohibited[4] = ';';
	prohibited[5] = '.';
	prohibited[6] = '!';
	prohibited[7] = '?';
	prohibited[8] = '\"';
	prohibited[9] = '(';
	prohibited[10] = ')';
	prohibited[11] = '{';
	prohibited[12] = '}';

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (a = 1; str[a] != 0; a++)
	{
		prev = a - 1;
		for (b = 0; prohibited[b] != 0; b++)
		{
			if (str[a] >= 'a' && str[a] <= 'z' && str[prev] == prohibited[b])
			{
				str[a] = str[a] - 32;
				break;
			}
		}
	}
	return (str);
}
