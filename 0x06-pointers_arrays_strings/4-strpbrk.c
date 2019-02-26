#include "holberton.h"
/**
 *
 *
 *
 *
 *
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int cont, comp;

	for (cont = 0; s[cont]; cont++)
	{
		for (comp = 0; accept[comp]; comp++)
		{
			if (s[cont] == accept[comp])
			{
				return (s + cont);
			}
		}
	}
	return ('\0');
}
