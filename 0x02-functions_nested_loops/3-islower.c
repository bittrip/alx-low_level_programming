#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * Description: checks if a character is lowercase.
 * @c: c is an ASCII character.
 * Return: 1, if c is lowercase, 0 if c is not lowercase
 */

int _islower(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
return (0);
}
