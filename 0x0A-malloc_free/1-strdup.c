#include "holberton.h"
#include <stdlib.h>

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
	for (contn = 0; contn <= cont; contn++)
	{
		nws[contn] = str[contn];
	}
	nws[cont] = '\0';
	return (nws);
}
