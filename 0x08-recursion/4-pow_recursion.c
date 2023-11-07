#include "main.h"
/**
  *_pow_recursion - function name
  *@x: function parameter
  *@y: function parameter
  *Return: -1 if y is less than 0, else x to power of y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
