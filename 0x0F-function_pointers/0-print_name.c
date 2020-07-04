#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - prints a name
 *@name: source string
 *@f: pointer to some functions
 *Return: it is a void function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	(*f) (name);
	}
}
