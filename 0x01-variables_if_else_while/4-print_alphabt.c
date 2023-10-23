#include <stdio.h>
/**
 * main - function name
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a != 'q'; a != 'e'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
