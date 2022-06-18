#include "main.h"
/**
 * leet - transform string into leet
 * Description: transform string into leet
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	int a, b;
	char str2[] = "aeotl";
	char arr[] = "43071";

	for (a = 0; str[a]; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if (str2[b] == str[a] || (str2[b] - 32) == str[a])
			{
				str[a] = arr[b];
				break;
			}
		}
	}
	return (str);
}
