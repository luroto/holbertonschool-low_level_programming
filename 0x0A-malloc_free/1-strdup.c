#include "holberton.h"
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

	for (cont = 0; str[cont]; cont++)
	{
	}
	if (str == NULL)
	{
		return (NULL);
	}
	nws = malloc(sizeof(*nws) * cont + 1);
	if (nws == NULL)
	{
		return (NULL);
	}
	for (contn = 0; str[contn]; contn++)
	{
		nws[contn] = str[contn];
	}
	return (nws);
}
