#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **_strdup - copies a string on a newly allocated space
 *
 *@name: source string
 *
 *Return: It returns a pointer to the allocated memory
 */
char *_strdup(char *name)
{
	int cont, contn;
	char *sname;

	if (name == NULL)
	{
		return (NULL);
	}
	for (cont = 0; name[cont]; cont++)
	{
	}
	name = malloc(sizeof(*name) * cont + 1);
	if (name == NULL)
	{
		return (NULL);
	}
	for (contn = 0; name[contn]; contn++)
	{
		sname[contn] = name[contn];
	}
	return (name);
}
/**
 **new_dog - creates a new dog
 *@name: name of the dog
 *@age: dog's age
 *@owner: dog's owner
 *return
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *inpuname, *inpuowner;
	inpuname = char _strdup(name);
	inpuowner = char _strdup(owner);

	struct dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
