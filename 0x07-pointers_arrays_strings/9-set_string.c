#include "holberton.h"
/**
 *set_string - it sets the value of a pointer to a char
 *
 *@s: value for be setting
 *@to: pointer that receives the value
 *
 *Return: void function
 */
void set_string(char **s, char *to)
{
	*s = to;
}
