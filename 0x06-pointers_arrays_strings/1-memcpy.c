#include "holberton.h"
/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *
 *@dest: destination memory area
 *@src: source memory area
 *
 *Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	while (i < n)
	{
		dest[i] = src[i];
	}
	return(dest);
}
