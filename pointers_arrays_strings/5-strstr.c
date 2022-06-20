#include "main.h"
/**
 * _strstr - locates a substring
 * Description: locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0' && haystack[i] == needle[0])
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j] != '\0')
		{
			i++;
			j = 0;
		}
		else
		{
			return (haystack + i);
		}
	}
	return (0);
}
