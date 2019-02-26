#include "holberton.h"
/**
 **_strpbrk - searches a string for any of a set of bytes
 *
 *@s: source string
 *@accept: array of accepted values
 *
 *Return: bytes on s which matches in accept or NULL if we don't find nothing
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
