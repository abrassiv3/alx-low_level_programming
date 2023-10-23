#include <stdio.h>
/**
  * main - function name
  * Return: 0
  */
int main(void)
{
	char alph;
	int bet;

	for (bet = 0; bet <= 9; bet++)
		putchar(bet);
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}
