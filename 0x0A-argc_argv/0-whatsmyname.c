#include <stdio.h>
/**
  *main - function name
  *@argc: function parameter
  *@argv: function parameter
  *Return: 0
  */
int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
