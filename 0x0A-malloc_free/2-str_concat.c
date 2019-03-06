#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	char *stringcomb;
	int cstr1 = 0, cstr2 = 0, contadorcomb, totalcomb, sustr = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[cstr1])
	{
		cstr1++;
	}
	while (s2[cstr2])
	{
		cstr2++;
	}
	totalcomb = (cstr1 + cstr2 + 1);
	stringcomb = malloc(sizeof(*stringcomb) * totalcomb);
	for (contadorcomb = 0; contadorcomb <= totalcomb; contadorcomb++)
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
	return (stringcomb);
}
