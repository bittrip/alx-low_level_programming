#include "main.h"

/**
 * times_table - prints the nine
 * times table starting from zero.
 * Description: prints the nine
 * times table starting from zero to screen.
 */

void times_table(void)
{
int i, j, ij, tens, ones;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
ij = i * j;
tens = ij / 10;
ones = ij % 10;

if (j == 0)
{
_putchar('0');
}
else if (ij < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(ones + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(tens + '0');
_putchar(ones + '0');
}
}
_putchar('\n');
}
}
