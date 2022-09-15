#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * Description: checks if a character is lowercase.
 */

int _islower(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
return (0);
}
