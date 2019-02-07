#include <stdio.h>
/**
 *main - We print the alphabet without e and q
 *
 *Description: We use a for to get all the alphabet set and after that we use
 *if to find the e and the q and excludes from the list*
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
