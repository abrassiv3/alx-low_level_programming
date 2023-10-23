#include <stdio.h>
/**
  *main - function name
  *Return: 0
  */
int main(void)
{
	int r;

	for (r = 0; r <= 9; r++)
	{
		putchar((r % 10) + '0');
		if (r == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	return (0);
}
