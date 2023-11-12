#include <stdio.h>
#include <stdlib.h>
/**
  * main-function name
  * @argc: function parameter
  * @argv: function parameter
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int s, coins;

	if (argc != 2)
	{
		printf("Error\n");
	}
	else
	{
		s = atoi(argv[1]);
		if (s >= 0)
		{
			while (s > 0)
		{	
			coins++;
			if ((s - 25) >= 0)
			{
				s -= 25;
				continue;
			}
			if ((s - 10) >= 0)
			{
				s -= 10;
				continue;
			}
			if ((s - 5) >= 0)
			{
				s -= 5;
				continue;
			}
			if ((s - 2) >= 0)
			{
				s -= 2;
				continue;
			}
			s--;
		}	
			printf("%d\n", coins);
		}
		else
			printf("0\n");
	}
	return (0);
}
