#include <stdio.h>
/**
  *main - function name
  *Return: 0
  */
int main(void)
{
	char t;

	for (t = 'z'; t >= 'a'; t--)
		putchar(t);
	putchar('\n');

	return (0);
}
