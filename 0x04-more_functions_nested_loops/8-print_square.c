#include "main.h"

/**
  *print_square - function name
  *@size: function parameter
  *Return: 0
  */
void print_square(int size)
{
	int y;
	int f;

	for (y = 0; y < size; y++)
		for (f = 0; f < size; f++)
		{
			_putchar('#');
			if (f == size - 1)
				_putchar('\n');
		}
}
