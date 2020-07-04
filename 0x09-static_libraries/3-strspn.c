#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring
 *
 *@s: source string
 *@accept: array of characters to be compared with
 *
 *Return: the number of bytes from accept and contained in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int cont, comp, metacon = 0;

	for (cont = 0; s[cont]; cont++)
	{
		for (comp = 0; accept[comp]; comp++)
		{
			if (s[cont] == accept[comp])
			{
				metacon++;
				break;
			}
		}
		if (accept[comp] == 0)
		{
			break;
		}
	}
	return (metacon);
}
