#include "dog.h"
/**
 * free_dog - dog :)
 * Description: frees dogs :)
 * @d: dog :)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
