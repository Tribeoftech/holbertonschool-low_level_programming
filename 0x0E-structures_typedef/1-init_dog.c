#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initalizes a variable of type struct dog
 * @d: Pointer to struct dog
 * @name: Pointer to dogs name
 * @age: Variable for dogs age
 * @owner: Pointer to owners name
 * Return: Void
 */

Void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
