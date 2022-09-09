#include <stdio.h>

/**
 * main - Program's entry point.
 * Description: Prints the sizes of various types to screen.
 * Return: 0, if successful.
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of a int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long));
printf("Size of a long long: %ld byte(s)\n", sizeof(long long));
printf("Size of a float: %g byte(s)\n", sizeof(float));

return (0);
}
