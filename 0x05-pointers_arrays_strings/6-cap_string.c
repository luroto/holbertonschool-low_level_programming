#include "holberton.h"
#include <stdio.h>
/**
 **cap_string - Capitalizes all words of a string
 *
 *@str: string source
 *
 *Return: It is supposed to be 0
 */
char *cap_string(char *str)
{
	char strspaces[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int istr, ia;

	for (istr = 0; str[istr]; istr++)
	{
		for (ia = 0; strspaces[ia]; ia++)
		{
			if (str[istr] == strspaces[ia])
			{
				if (str[istr + 1] >= 97 && str[istr + 1] <= 122)
				{
					str[istr + 1] = str[istr + 1] - 32;
				}
			}
		}
	}
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	return (str);
}
