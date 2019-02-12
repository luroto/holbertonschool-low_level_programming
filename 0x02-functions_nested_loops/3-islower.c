#include "holberton.h"
/**
 *_islower - displays if input is in lowercase
 *
 *@c: It's the number provided from input
 *
 *Return: it is supposed to be 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
