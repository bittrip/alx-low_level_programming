#include "main.h"

/**
 * main - prints the alphabet in lowercase.
 * Description: prints the alphabet in lowercase to screen.
 * Return: 0, if successful.
 */

int main(void)
{
    char str[9] = "_putchar";
    int i = 0;

    for (i = 0; i < 8; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');

    return (0);
}