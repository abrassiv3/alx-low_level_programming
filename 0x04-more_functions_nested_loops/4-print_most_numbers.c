#include "main.h"

/**
  *print_most_numbers - function name
  *Return: 0
  */
void print_most_numbers(void)
{
	char e;

	for (e = '0'; e <= '9'; e++)
		_putchar(e);
		if (e == '2' || e == '4')
			continue;
	_putchar('\n');
