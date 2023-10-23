#include <stdio.h>
/**
  * main - function name
  * Return: 0
  */
int main(void)
{
	char alph;

	for (char alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (char alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}
