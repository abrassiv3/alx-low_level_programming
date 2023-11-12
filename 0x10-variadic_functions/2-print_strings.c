#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
  * print_strings - function name
  * @separator: separates the numbers
  * @n: number of strings passed
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list r;
	char *name;
	unsigned int loop;

	va_start(r, n);

	for (loop = 0; loop < n; loop++)
	{
		name = va_arg(r, char *);
		if (name == NULL)
		{
			PRINTF("(nil)");
		printf("%s", name);
		if (loop != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(r);
	printf("\n");
}
