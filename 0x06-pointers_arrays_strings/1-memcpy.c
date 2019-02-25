#include "holberton.h"
/**
 **_memcpy - copies n bytes from memory area src to memory area dest
 *
 *@dest: destination memory area
 *@src: source memory area
 *@n: number of bytes copied fron src
 *
 *Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, isrc = 0;

	while (src[isrc])
	{
		isrc++;
	}
	if (n > isrc)
	{
		n = isrc;
	}
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}
