#include <stdio.h>
/**
  * main - function name
  * @argc: function parameter
  * @argv: function parameter
  * Return: 0
  */
int main(int argc, char **argv)
{
	int n, p, q, r;

	n = argc;
	printf("%d\n", n);

	p = *argv[1];
	printf("%d\n", p);

	q = *argv[2];
	printf("%d\n", q);

	r = q * p;
	printf("%d\n", r);

	return (0);
}
