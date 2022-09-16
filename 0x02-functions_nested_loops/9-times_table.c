#include "main.h"

/**
 * times_table - prints the nine
 * times table starting from zero.
 * Description: prints the nine
 * times table starting from zero to screen.
 */

void times_table(void)
{
int i;
int k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
_putchar(i*j);
}
}
}
