#include <stdarg.h>
#include "variadic_functions.h"

/**
  *sum_them_all - function name
  *@n: function parameter
  *Return: sum unless n = 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int j, result = 0;

	va_start(x, n);

	for (j = 0; j < n; j++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			result += va_arg(x, const unsigned int);
		}
	}

	va_end(x);
	return (result);
}
