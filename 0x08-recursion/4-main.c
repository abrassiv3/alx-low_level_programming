#include "main.h"
#include <stdio.h>
/**
  *main - check code
  *Return: 0
  */
int main(void)
{
	int n;

	n = _pow_recursion(1, 1);
	printf("%d\n", n);
	n = _pow_recursion(2, 0);
	printf("%d\n", n);
	n = _pow_recursion(3, 2);
	printf("%d\n", n);
	n = _pow_recursion(2, 2);
	printf("%d\n", n);
	return (0);
}
