#include "holberton.h"
/**
 *_strlen_recursion - Returns the lenght of a string
 *
 *@s: Source string
 *
 *Return: The lenght of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		i++;
		return (i);
	}
	return (i);
}
