#include <stdlib.h>
#include "holberton.h"
/**
 *argstostr - Concatenates all strings passed as arguments
 *@ac: Number of arguments
 *@av: Array of arguments
 *Return: A string of concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, sumarize;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		j = 0;
		for (j = 0; av[i][j] != '\0'; j++)
		{
			sumarize++;
		}
	}
	sumarize += ac - 1;
	s = malloc(sumarize * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 1;
	k = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
