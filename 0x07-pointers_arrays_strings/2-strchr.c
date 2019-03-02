#include "holberton.h"
/**
 **_strchr - locates a character in a string
 *
 *@s: pointer of source
 *@c: character to be locate
 *
 *Return: first occurence of the character c in the string s, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	while (s[0])
	{
		if (s[0] == c)
		{
			return (s);
		}
		s++;
	}
	if (s[0] == c)
	{
		return (s);
	}
	return ('\0');
}
