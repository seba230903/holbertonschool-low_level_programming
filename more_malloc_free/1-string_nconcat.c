#include "main.h"
/**
 * string_nconcat - string concatenate
 * Description: concatenates two strings
 * @s1: string
 * @s2: string
 * @n: int
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);

	p = malloc(6 + n + (strlen(s1)));
	if (p == NULL)
		return (0);
	for (i = 0; s1[i]; i++)
		p[i] = s1[i];
	while (j < n)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = 0;
	return (p);
}
