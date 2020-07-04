#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - frees all the dogs
 *@d: pointer for the struct
 *Return: It's a void function
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
