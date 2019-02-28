#include "holberton.h"
/**
 *factorial - returns the factorial of a given number
 *
 *@n: number given by input
 *
 *Return: the factorial of the n number
 */
int factorial(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		if (n != 0)
		{
			i = n * factorial(n - 1);
			return (i);
		}
	}
	return (i);
}
