#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 * Description: prints the alphabet in lowercase to screen 10 times.
 */

void print_alphabet_x10(void)
{
int i;
char letter;
for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}