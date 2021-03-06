#include "main.h"
/**
 * _calloc - allocate memory
 * Description: allocates memory for an array, using malloc
 * @nmemb: int
 * @size: int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (0);
	for (i = 0; i < (size * nmemb); i++)
		p[i] = 0;
	return (p);
}
