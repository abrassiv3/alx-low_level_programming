#include "main.h"
/**
  * swap_int - function name
  * @a: function parameter
  * @b: function parameter
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
