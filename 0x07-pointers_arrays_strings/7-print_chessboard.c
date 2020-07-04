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
	int contador = 0, comp = 0;

	for (contador = 0; contador < 8; contador++)
	{
		for (comp = 0; comp < 8; comp++)
		{
			_putchar(a[contador][comp]);
		}
		_putchar('\n');
	}
}
