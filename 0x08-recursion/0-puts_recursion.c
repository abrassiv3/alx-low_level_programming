#include "main.h"
/**
  *_puts_recursion - function name
  *@s: Function parameter
  *
  */
void _puts_recursion(char *s)
{
	_putchar(s);
	if (s != 0)
		_puts_recursion(s);
}
