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

	if (argc > 2 && argc < 4)
	{
		for (n = 1; n < argc; n++)
		{
			*argv[n] =(*argv[n] - '0');
		}

		p = *argv[1];
		q = *argv[2];
		r = q * p;
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
