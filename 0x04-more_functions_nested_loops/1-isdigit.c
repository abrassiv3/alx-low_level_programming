#include <stdio.h>

/**
  * _isdigit - Function name.
  * @c: Function Parameter.
  * Return: 0 if not digit, 1 if digit.
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
