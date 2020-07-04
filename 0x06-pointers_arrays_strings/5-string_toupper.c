#include "holberton.h"
/**
 **string_toupper - changes from lower to uppercase
 *
 *@chara: stores the string
 *
 *Return: the uppercase string
 */
char *string_toupper(char *chara)
{
	int iterante = 0;

	while (chara[iterante])
	{
		if (chara[iterante] >= 97 && chara[iterante] <= 122)
		{
			chara[iterante] = chara[iterante] - 32;
		}
	iterante++;
	}
return (chara);
}
