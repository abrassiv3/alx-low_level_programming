#include "main.h"
/**
  * _puts - function name
  * @str: function parameter
  */
void _puts(char *str)
{
	int f;

	for (f = 0, str[f] != '\0'; f++)
		_putchar (str[f]);
		_putchar ('\n');
}
