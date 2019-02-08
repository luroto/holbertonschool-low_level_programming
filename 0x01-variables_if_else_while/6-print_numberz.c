#include <stdio.h>
/**
 *main - Displays base 10 single digit numbers
 *
 *Description: Using four to collect all the ASCII codes for the numbers,
 *after that we use putchar to translate it
 *
 *Return: It is supposed to be 0
 */
int main(void)
{
int num;
for (num = 48 ; num <= 57 ; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
