#include "main.h"
/**
  *puts_half - function name
  *
  *@str: function parameter
  */
void puts_half(char *str)
{
	int i;
	int sum = 0;
	int b;

	for (i = 0; str[i] != '\0'; i++)
		sum++;

	b = (sum - 1) / 2;

	for (i = b + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
}
