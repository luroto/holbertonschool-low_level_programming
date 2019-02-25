#include "holberton.h"
/**
 *_memset - fills the first n bytes of the memory area pointed to.
 *
 *@s: pointer to the memory area
 *@b: constant byte
 *@n: number of bytes on the memory area pointed to by s
 *Return: S pointer area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
		s[i] = b;
		i++;
	}
return (s);
}
