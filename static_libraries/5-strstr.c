#include "main.h"

/**
 * _strstr - find first occurrence
 * @haystack: string
 * @needle: string
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	int sizeOfNeedle = strlen(needle);

	while (*haystack)
	{
		if (!memcmp(haystack, needle, sizeOfNeedle))
			return (haystack);
		haystack++;
	}
	return (0);
}
