#include "holberton.h"
/**
 *print_chessboard - prints a chessboard
 *
 *@a: source info
 *
 *Return: Provided by the exercise
 */
void print_chessboard(char (*a)[8])
{
        int contador, comp ;
	contador = 0;
	while (a[contador])
		{
			comp = 0;
			while (a[comp])
			{
				_putchar(a [contador] [comp]);
				comp++;
			}
				_putchar('\n');
				contador++;
		}
}
