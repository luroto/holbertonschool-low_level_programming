#include "holberton.h"

/**
 *_isupper - checks for uppercase character
 *
 *@c:- Stores the input
 *
 *Return: It is supposed to be zero
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
