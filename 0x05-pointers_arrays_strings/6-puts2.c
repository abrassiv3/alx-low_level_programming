#include "main.h"

/**
  *puts2 - function name
  *@str: function parameter
  */
void puts2(char *str)
{
	int d;

	for (d = 0; str[d] != '\0'; d = d + 2)
		_putchar(str[d]);
	_putchar('\n');
}
