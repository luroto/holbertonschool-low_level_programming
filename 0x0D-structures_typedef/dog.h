#ifndef _DOG_H
#define _DOG_H
/**
 *struct dog - define parameters for functions
 *@name: Dog's name
 *@age: Dog's age
 *@owner: Name of dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
