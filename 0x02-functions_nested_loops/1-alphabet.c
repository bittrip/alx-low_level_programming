#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase.
 * Description: prints the alphabet in lowercase to screen.
 */

void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
