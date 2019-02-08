 #include <stdio.h>
/**
 *main - We use this function to print the alphabet without two letters
 *
 *Return: It is supposed to be 0
 */
int main(void)
{
char alpha;

for (alpha = 'a' ; alpha <= 'z' ; alpha++)
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
