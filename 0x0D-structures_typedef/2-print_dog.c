#include "dog.h"
#include <stdio.h>
/**
 *print_dog - prints a struct dog
 *@d: pointer which contains the dog's info
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("%s\n", "");
	}
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d ->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
