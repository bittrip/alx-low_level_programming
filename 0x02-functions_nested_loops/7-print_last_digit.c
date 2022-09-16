#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: an integer.
 * Description: prints the last digit of a number to screen.
 * Return: last digit of a number.
 */

int _abs(int n)
{
int nl;
nl = n % 10;
if (n < 0)
    nl = nl * -1;

_putchar(nl + '0');

return (nl);
}
