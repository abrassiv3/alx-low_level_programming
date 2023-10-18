#include "main.h"
/**
  *print_rev - function name
  *@s: function parameter
  */
void print_rev(char *s)
{
	int d;
	int c = 0;

	for (d = 0; s[d] != '\0'; d++)
		c++;
	for (d = c - 1; d >= 0; d--)
		_putchar(s[d]);
	_putchar('\n');
}
