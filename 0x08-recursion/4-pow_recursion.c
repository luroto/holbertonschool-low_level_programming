#include "holberton.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y
 *
 *@x: integer to be raised
 *@y: integer which represent the number of times x is raised.
 *
 *Return: It returns the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
