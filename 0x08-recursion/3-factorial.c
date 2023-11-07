#include "main.h"
/**
  *factorial - function name
  *@n: function parameter
  *Return: -1 if n is less than 0, else 1
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
