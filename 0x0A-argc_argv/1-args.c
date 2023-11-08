#include <stdio.h>
/**
  * main - function name
  * @argc: function parameter 
  * @argv: function parameter
  * Return: 0
  */
int main(int argc, char **argv)
{
	int n;

	(void) **argv;
	n = argc - 1;
	printf("%d\n", n);
	
	return (0);
}
