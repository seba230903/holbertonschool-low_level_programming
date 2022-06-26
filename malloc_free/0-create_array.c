#include "main.h"

/**
 * create_array - create an array
 * Description: creates array of chars and initializes it with a specific char
 * @size: int
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
		return (0);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (0);
	while (i < size)
	{
		*(str + i) = c;
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
