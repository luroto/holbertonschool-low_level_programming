#include "holberton.h"

/**
 *print_alphabet - We're trying to print the alphabet in lowercase using
 *different functions.
 *
 *Return: 0
 */
void print_alphabet(void)
{
	int alpha;

for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
_putchar(alpha);
}
_putchar('\n');

}
