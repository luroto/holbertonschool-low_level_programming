#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **create_array - creates an array with size defined from a variable on main
 *
 *@size: number of positions
 *@c: character for filling the array
 *Return: provided by the exercise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int con;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(c) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (con = 0; con < size; con++)
	{
		str[con] = c;
	}
	return (str);
}
