#include <stdio.h>

/**
 * main - Entry point of code
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(afloat));
	return (0);
}
