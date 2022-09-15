#include "main.h"

/**
 * main - prints the alphabet in lowercase.
 * Description: prints the alphabet in lowercase to screen.
 * Return: 0, if successful.
 */

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n')
return (0);
}
