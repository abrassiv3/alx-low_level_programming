#include "main.h"
#include <stdio.h>
/**
  *main - check code
  *Return: 0
  */
int main(void)
{
	int n;

	n = factorial(5);
	printf("%d\n", n);
	n = factorial(3);
	printf("%d\n", n);
	n = factorial(-1);
	printf("%d\n", n);
	n = factorial(0);
	printf("%d\n", n);
	return (0);
}
