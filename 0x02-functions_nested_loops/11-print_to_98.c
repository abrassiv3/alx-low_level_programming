#include "main.h"
/**
  *print_to_98 - function name
  *@n: function parameter
  *Return = 0
  */
void print_to_98(int n)
{
	int r;

	if (n == 98)
		_putchar(n);
	else if (n < 98)
		for (r = n; r < 98; r++)
		{
			_putchar(r);
			_putchar(',');
			_putchar(' ');
			if (r == 97)
			{
				r++;
				_putchar(r);
			}
		}
}
