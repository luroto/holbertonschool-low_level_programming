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
	int x = 0, y = 0, temp;

	while (*(s + x))
	{
		x++;
	}
	x--;
	while (y != x && x > y)
		{
			temp = s[x];
			s[x] = s[y];
			s[y] = temp;
			x--;
			y++;
		}
}
