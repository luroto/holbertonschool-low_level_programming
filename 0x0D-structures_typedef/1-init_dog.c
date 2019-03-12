#include "dog.h"
/**
*init_dog - function that prints a struct
*struct dog: collects info about our dog
*@d: pointer to our info?
*@name: doggie's name
*@age: doggie's age
*@owner: doggie's owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
