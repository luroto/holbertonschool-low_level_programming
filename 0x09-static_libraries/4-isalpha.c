#include "holberton.h"
/**
 *_isalpha - checks for alphabetic character
 *
 *@c: stored the input previously entered.
 *
 *Return: it is supposed to be 0 if is not an alphabetic chara, 1 otherwise
 *
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
