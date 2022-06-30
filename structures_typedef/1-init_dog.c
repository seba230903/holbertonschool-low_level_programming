#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize dog
 * Description: initialize a variable of type struct dog
 * @d: pointer to dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *my_dog;

	*my_dog = *d;
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
}
