#include <stdio.h>
#include <stdlib.h>
/**
  * main - function name
  * @argc: function parameter
  * @argv: function parameter
  * Return: 0
  */
int main(int argc, char **argv)
{
	int p, q, r;

	if (argc > 2 && argc < 4)
	{
		p = atoi(argv[1]);
		q = atoi(argv[2]);
		r = q * p;
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
