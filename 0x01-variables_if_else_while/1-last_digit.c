#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - function name
  *Return: always 0
  */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);
	ld = n % 10;

	if (ld > 5)
		printf("is %d and is greater than 5", ld);
	else if (ld == 0)
		printf("is %d and is 0", ld);
	else if (ld < 6 && ld != 0)
		printf("is %d and is less than 6 and not 0", ld);

	return (0);
}
