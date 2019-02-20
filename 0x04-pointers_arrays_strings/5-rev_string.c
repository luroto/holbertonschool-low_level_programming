#include "holberton.h"
#include "stdio.h"
/**
 *rev_string - Reverses a string
 *
 *@s: pointer
 *
 *Return: Provided by the exercise.
 */
void rev_string(char *s)
{
	int x = 0, y, temp;

	while (*(s + x))
	{
		x++;
	}
	(x--);
	for (y = 0; y != x && x > y; y++)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
		x--;
	}
}
