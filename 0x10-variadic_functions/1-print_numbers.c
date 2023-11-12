#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - function name
  * @separator: separates the numbers
  * @n: number of integers passed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list r;
	unsigned int loop;

	va_start(r, n);

	for (loop = 0; loop < n; loop++)
	{
		printf("%d", va_arg(r, int));
		if (loop != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(r);
	printf("\n");
}
