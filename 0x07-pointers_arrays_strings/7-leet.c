#include "holberton.h"

/**
 * leet - Function to modify a string based in the leet code
 * @string: input string
 * Return: modified string
 */
char *leet(char *string)
{
	int i, longi;
	char *letters = "aAeEoOtTLl";
	char *numbers = "4433007711";

	longi = 0;
	while (string[longi] != '\0')
	{
		for (i = 0; i <= 9; i++)
		{
			if (string[longi] == letters[i])
			{
				string[longi] = numbers[i];
			}
		}
		longi++;
	}
	return (string);
}
