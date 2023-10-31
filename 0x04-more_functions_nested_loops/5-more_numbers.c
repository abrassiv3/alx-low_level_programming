#include "main.h"

/**
  *more_numbers - Function name
  *Return: 0
  */
void more_numbers(void)
{
	int e;
	char f, g;
	char h = 1;

	for (e = 0; e <= 10; e++)
	       for (f = '0'; f <= '9'; f++)
			_putchar(f);
			if (f == 9)
				for (g = '1'; g <= '4'; g++)
					_putchar(h);
					_putchar(g);
}
