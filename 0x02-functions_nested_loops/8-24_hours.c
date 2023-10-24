#include "main.h"
#include <stdio.h>
/**
  *jack_bauer - function name
  *Return: 0
  */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
		for (b = 0; b <= 9; b++)
			for (c = 0; c < 6; c++)
				for (d = 0; d <= 9; d++)
					printf("%d%d:%d%d\n", a, b, c, d);
}
