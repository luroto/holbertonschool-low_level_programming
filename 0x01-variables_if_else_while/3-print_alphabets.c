#include <stdio.h>
/**
 *main - Prints the alphabet in lowercase and uppercase
 *
 *Description: Get the data first, print with putchars next
 *
 *Return: It is supposed to be 0
 **/
int main(void)
{
char alpha, BET;
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
putchar(alpha);
}
for (BET = 'A' ; BET <= 'Z'; BET++)
{
	putchar(BET);
}
putchar('\n');
return (0);
}
