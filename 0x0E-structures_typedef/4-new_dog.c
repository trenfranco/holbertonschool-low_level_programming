#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *perro;
	int i, j, c1, c2;

	i = 0;
	while (name[i] != '\0')
		i++;
	j = 0;
	while (owner[j] != '\0')
		j++;
	perro = malloc(sizeof(dog_t));
	if (perro == NULL)
		return (NULL);
	perro->name = malloc((i + 1) * sizeof(char));
	if (perro->name == NULL)
	{
		free(perro);
		return (NULL);
	}
	for (c1 = 0; c1 < i; c1++)
	{
		perro->name[c1] = name[c1];
	}
	perro->name[c1] = '\0';
	perro->age = age;
	perro->owner = malloc((j + 1) * sizeof(char));
	if (perro->owner == NULL)
	{
		free(perro->name);
		free(perro);
	return (NULL);
	}
	for (c2 = 0; c2 < j; c2++)
	{
		perro->owner[c2] = owner[c2];
	}
	perro->owner[c2] = '\0';
	return (perro);

}
