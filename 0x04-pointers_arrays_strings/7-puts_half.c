#include "holberton.h"
/**
 *puts_half -prints the second half of a string
 *
 *@str: pointer to a string
 *
 *Return: It is supposed to be 0
 */
void puts_half(char *str)
{
	int totalpositions = 0, beginningposition;

	while (str[totalpositions])
	{
		totalpositions++;
	}
	if (totalpositions % 2 == 0)
	{
		l = totalpositions / 2;
	}
	else if (totalpositions % 2 != 0)
	{
		l = ((totalpositions + 1) / 2);
	}
		while (beginningposition < totalpositions)
		{
			_putchar(str[beginnningposition]);
			beginningposition++;
		}
		_putchar('\n');
}
