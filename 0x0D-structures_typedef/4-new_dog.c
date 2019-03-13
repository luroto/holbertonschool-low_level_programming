#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **_strdup - copies a string on a newly allocated space
 *
 *@str: source string
 *
 *Return: It returns a pointer to the allocated memory
 */
char *_strdup(char *str)
{
	int cont, contn;
	char *nws;

	if (str == NULL)
	{
		return (NULL);
	}
	for (cont = 0; str[cont]; cont++)
	{
	}
	nws = malloc(sizeof(*nws) * cont + 1);
	if (nws == NULL)
	{
		free(nws);
		return (NULL);
	}
	for (contn = 0; str[contn]; contn++)
	{
		nws[contn] = str[contn];
	}
	return (nws);
}
/**
 **new_dog - creates a new dog
 *@name: name of the dog
 *@age: dog's age
 *@owner: dog's owner
 *Return: returns the pointer to the struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(name);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(owner);
		return (NULL);
	}
	return (new_dog);
}
