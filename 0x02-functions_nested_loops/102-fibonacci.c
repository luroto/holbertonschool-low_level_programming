#include <stdio.h>

/**
 *main - prints the fibonacci numbers starting with 1 and 2
 *
 *Return: It is supposed to be 0
 */
int main(void)
{
int c;
long int f1, f2, f3;

f1 = 0;
f2 = 1;
for (c = 0 ; c < 49 ; c++)
{
f3 = f1 + f2;
f1 = f2;
f2 = f3;
if (c == 46)
{
printf("%ld", f3);
}
else
{
printf("%ld, ", f3);
}
}
putchar('\n');
return (0);
}