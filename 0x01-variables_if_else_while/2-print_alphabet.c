#include <stdio.h>

/**
 * main - print lowercased alphabet
 *Return: 0
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}