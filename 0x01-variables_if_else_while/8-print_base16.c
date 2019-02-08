#include <stdio.h>
/**
 *main - We print the base 16 numbers in lowercase
 *
 *Description: Printing numbers
 *
 *Return: It is supossed to be 0
 */
int main(void)
{
char num, alpha;
for (num = '0' ; num <= '9'; num++)
{
putchar(num);
}
for (alpha = 'a' ; alpha <= 'f'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
