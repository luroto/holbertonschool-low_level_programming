#include <stdio.h>
/**
 *main -This code prints the alphabet in lowcase
 *
 *Description: We use a for cycle to get all the values for the alphabet into a
 *variable, then we print it with a putchar function.
 *
 *Return: It is supposed to be 0
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
