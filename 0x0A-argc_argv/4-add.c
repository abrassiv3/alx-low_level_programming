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
	int p, q, r = 0;

	for (p = 1; p < argc; p++)
	{
		for (q = 0; argv[p][q]; q++)
		{
			if (argv[p][q] < '0' || argv[p][q] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		r += atoi(argv[p]);
	}
	printf("%d\n", r);
	return (0);
}
