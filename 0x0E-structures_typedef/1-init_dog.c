#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initalazing struct dog
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	return;

d->name = name;
d->age = age;
d->owner = owner;

return;
}
