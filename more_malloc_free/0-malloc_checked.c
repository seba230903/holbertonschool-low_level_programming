#include "main.h"
/**
 * malloc_checked - allocate memory
 * Description: allocates memory using malloc
 * @b: int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
