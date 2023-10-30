#include <stdio.h>

int main(void)
{
	int years = 2000;
	int q = 2000 % 4;
	int r = 2000 % 400;
	int s = 2000 % 100;

	if ((years % 4 == 0 || years % 400 == 0) && !(years % 100 == 0))
	{
		printf("q = %d\nr = %d\ns = %d\n", q, r, s);
	}
	else
	{
		printf("Correction needed!");
	}
	return (0);
}
