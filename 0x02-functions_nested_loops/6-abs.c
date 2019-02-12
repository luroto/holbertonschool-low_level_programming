#include "holberton.h"
/**
 *_abs - compute the absolute value of a integer
 *
 *@a: Displays an absolute value
 *
 *Return: It is supossed to be 0
 */
int _abs(int a)
{
	int b;

	if (a >= 0)
	{
		return (a);
	}
	if (a < 0)
	{
		b = a * (-1);
		return (b);
	}
	return (0);
}
