#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *main - stores two arguments as integers and prints their addition
 *
 *@argc: number of arguments
 *@argv: content of arguments
 *Return: 0 if success, otherwise 1
 */
int main(int argc, char **argv)
{
	int i, j, sumando, sumatoria;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= 48 && argv[i][j] >= 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sumando = atoi(argv[i]);
		if (sumando != 0)
		{
			sumatoria += sumando;
		}
	}
	printf("%d\n", sumatoria);
	return (0);
}
