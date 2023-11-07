#include "main.h"
/**
  *primcheck - function name
  *@a: function parameter
  *@b: function parameter
  *Return: prime check
  */
int primcheck(int a, int b)
{
	if (a % b == 0)
	{
		return (1);
	}
	return (primcheck(a, b + 1));
}
/**
  *_is_prime_number - function name
  *@n: function parameter
  *Return: 1 if prime
  */
int _is_prime_number(int n)
{
	return (primcheck(n, 1));
}
