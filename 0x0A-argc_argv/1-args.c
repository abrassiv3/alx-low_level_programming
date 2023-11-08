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
       
	for (n = 1; n < argc; n++)
	{
		printf("%s\n", argv[n]);
		printf("%d\n", argc);
	}
	return (0);
}
