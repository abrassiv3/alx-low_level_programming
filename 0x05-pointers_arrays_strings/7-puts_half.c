#include "main.h"
/**
  *puts_half - function name
  *
  *@str: function parameter
  */
void puts_half(char *str)
{
	int i;
	int sum;

	for (i = 0; str[i] != '\0'; i++)
		sum++;

	sum = sum / 2;

	for (i = sum; str[i] != '\0'; i++)
		_putchar(str[i]);
}
