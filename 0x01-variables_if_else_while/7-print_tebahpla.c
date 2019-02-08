#include <stdio.h>
/**
 *main - Prints the lowercase alphabet in reverse
 *
 *Description: Get the data first, print with putchars next
 *
 *Return: It is supposed to be 0
 **/
int main(void)
{
char alpha;
for (alpha = 'z' ; alpha >= 'a' ; alpha--)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
