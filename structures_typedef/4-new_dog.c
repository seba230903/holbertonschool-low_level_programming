#include "dog.h"
#include <string.h>
/**
 * new_dog - new dog
 * Description: creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if faili
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	new_dog->name = strdup(name);
	if (!(new_dog->name))
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = strdup(owner);
	if (!(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
