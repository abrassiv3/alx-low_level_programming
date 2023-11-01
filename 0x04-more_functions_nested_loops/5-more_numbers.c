#include <stdio.h>
#include "main.h"

/**
  *more_numbers - function name
  */

void more_numbers(void)
{
	int e;
	char i;

	for (e = 1; e <= 10; e++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
			if (i == '9')
			{
				printf("1011121314");
    _putchar('\n');
			}
		}
	}
}
