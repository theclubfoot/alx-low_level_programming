#include <stdio.h>

/**
 * main - Entry point of code
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char acharacter;
	int aint;
	long along;
	long long alongalong;
	float afloat;

	printf("size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("size of an int: %lu byte(s)\n", sizeof(aint));
	printf("size of a long int: %lu byte(s)\n", sizeof(along));
	printf("size of a long long int: %lu byte(s)\n", sizeof(alonglong));
	printf("size of a float: %lu byte(s)\n", sizeof(afloat));

	return (0);
}
