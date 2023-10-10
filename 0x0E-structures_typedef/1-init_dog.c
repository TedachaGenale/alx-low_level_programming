#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function that initialize a struct
 * @d: Pointer to the struct to be returned
 * @name: First member of the struct
 * @age: second member of the struct
 * @owner: Last member of the struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
