#include <stdio.h>
/**
 *main - Printing the alphabet in lower and uppercase
 *
 *Description: Using a for to collect data, then putchar
 *
 *Return: Supposed to be 0
 */
int main(void)
{
int alpha, BET;
for (alpha = 'a' ; alpha <= 'z'; alpha++)
{
putchar (alpha);
}
for (BET = 'A'; BET <= 'Z'; BET++)
{
putchar(BET);
}
putchar('\n');
return (0);
}
