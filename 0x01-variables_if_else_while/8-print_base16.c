#include <stdio.h>
/**
 *main - We print the base 16 numbers in lowercase
 *
 *Description: 
 *
 *Return: It is supossed to be 0
 */
int main(void)
{
char alpha;
for (alpha = 'a' ; alpha <= 'z'; alpha++)
{
if (alpha == 'e' || alpha == 'q')
{
alpha++;
}
putchar(alpha);
}
putchar('\n');
return (0);
}
