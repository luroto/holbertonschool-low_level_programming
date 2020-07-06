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
	int i, sumando, sumatoria;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		sumando = atoi(argv[i]);
		if (sumando != 0)
		{
			sumatoria += sumando;
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	printf("%d\n", sumatoria);
	return (0);
}
