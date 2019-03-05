#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
char *create_array(unsigned int size, char c)
{
	unsigned int con;
	char *str;

	if (size == '0')
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
