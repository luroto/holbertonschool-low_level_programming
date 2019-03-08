#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **string_nconcat - concatenates two strings
 *@s1: contains the first string
 *@s2: contains the second string
 *@n: defines the number of bytes to be printed from s2
 *Return: A pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *stringcomb;
unsigned int cstr1 = 0, cstr2 = 0, contadorcomb, totalcomb = 0, sustr = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[cstr1])
		cstr1++;
	while (s2[cstr2])
		cstr2++;
	if (n <= cstr2)
		cstr2 = n;
	totalcomb = (cstr1 + cstr2 + 1);
	stringcomb = malloc(sizeof(stringcomb) * totalcomb);
	if (stringcomb == NULL)
		return (NULL);
	for (contadorcomb = 0; contadorcomb < totalcomb - 1; contadorcomb++)
	{
		if (contadorcomb < cstr1)
		{
			stringcomb[contadorcomb] = s1[contadorcomb];
		}
		else
		{
			stringcomb[contadorcomb] = s2[sustr];
			sustr++;
		}
	}
	stringcomb[contadorcomb] = 0;
	return (stringcomb);
}
