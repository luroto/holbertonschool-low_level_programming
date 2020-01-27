#include "holberton.h"
/**
 *rot13 -Encodes a string using rot13
 *@string: Text to be encoded
 *Return: the encoded string
 */

char *rot13(char *string)
{
	char *abc = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *nop = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i = 0;
	int j = 0;

	while (string[i] != '\0')
	{
		while (abc[j] != '\0')
		{
			if (string[i] == abc[j])
			{
				string[i] = nop[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (string);
}
