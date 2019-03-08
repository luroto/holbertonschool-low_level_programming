#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **string_nconcat - concatenates two strings
 *
 *@s1: contains the first string
 *
 *@s2: contains the second string
 *
 *@n: defines the number of bytes to be printed from s2
 *
 *Return: A pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int longit, longi

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[2len])
	{
		2len++;
	}
	if (n  >= 2len)
	{
		n = 2len;
	}
	else
	{
		totalen = len1 + n + 1;
	}
	newstr = malloc(sizeof(char *) * (len1 + n + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (conta1 = 0; conta1 < totalen; conta1++)
	{
		if (conta1 < len1)
		{
			newstr[conta1] = s1[conta1];
		}
		else
		{
			newstr[conta1] = s2[itera2];
			itera2++;
		}
	}
	return (newstr);
}
