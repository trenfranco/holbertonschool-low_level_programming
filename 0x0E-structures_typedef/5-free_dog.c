#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: pointer
 * Return: pointer
 */
void free_dog(dog_t *d)
{
if (d == NULL)
	return;
free(d->name);
free(d->owner);
free(d);

}
