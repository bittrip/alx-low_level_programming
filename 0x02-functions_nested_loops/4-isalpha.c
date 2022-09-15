#include "main.h"

/**
 * _isapha - checks if a character is an alphabet
 * Description: checks if a character is an alphabet.
 * @c: c is an ASCII character.
 * Return: 1, if c is an alphabet, 0 if c is not an alphabet
 */

int _isalpha(int c)
{
if ((c <= 'z' && c >= 'a') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
