#include <stdio.h>
/**
  *main - function name
  *Return: 0
  */
int main(void)
{
	int r;

	for (r = '0'; r <= '8'; r++)
		putchar(r);
		if (r == 0)
			continue;
		putchar(',');
		putchar(' ');
	putchar('9');

	return (0);
}
