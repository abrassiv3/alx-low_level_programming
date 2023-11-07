#include "main.h"
/**
  *sqrchk - function name
  *@a: function parameter
  *@b: function parameter
  *Return: sqrchk
  */
int sqrchk(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrchk(a, (b + 1)));
}
/**
  *_sqrt_recursion - function name
  *@n: function parameter
  *Return: -1 if not natural, n if natural square root.
  */
int _sqrt_recursion(int n)
{
	return (sqrchk(n, 0));
}
