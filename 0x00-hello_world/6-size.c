#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long e;
	long long g;
	float f;
	char c;

	printf("Size of a char: %lu byte(s)\n", (unsignedlong)sizeof(c))
	printf("Size of an int: %lu byte(s)\n", (unsignedlong)sizeof(i))
	printf("Size of a long int: %lu byte(s)\n", (unsignedlong)sizeof(e))
	printf("Size of a long long int: %lu byte(s)\n", (unsignedlong)sizeof(g))
	printf("Size of a float: %lu byte(s)\n", (unsignedlong)sizeof(f))

	return (0);
}
