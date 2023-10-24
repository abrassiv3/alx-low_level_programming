#include "holberton.h"

/**
  * times_table - function name
  */
void times_table(void)
{
	int s, u, e;

	for (s = 0; s <= 9; s++)
	{
		_putchar('0');

		for (u = 1; u <= 9; u++)
		{
			_putchar(',');
			_putchar(' ');

			e = s * u;

			if (e <= 9)
				_putchar(' ');
			else
				_putchar((e / 10) + '0');

			_putchar((e % 10) + '0');
		}
		_putchar('\n');
	}
}
