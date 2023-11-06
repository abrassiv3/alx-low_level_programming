#include "main.h"
/**
  *_puts_recursion - function name
  *@s: Function parameter
  *
  */
void _puts_recursion(char *s)
{
	int n = 0;

	_putchar(s[n]);
	n++;
	if (s[n] != '\0')
		_puts_recursion(s);
}
