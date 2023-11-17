#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - combines two srings into one
  * @s1: string 1
  * @s2: string 2
  * Return: NULL on failure, else space in memory containing new string
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int r, t, u = 0, length;
	char *e;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	length = (strlen(s1) + strlen(s2) + 1);
	e = malloc(sizeof(char) * length);

	if (e == NULL)
		return (NULL);

	for (r = 0; r < length; r++)
	{
		e[r] = s1[r];
		if (s1[r] == '\0')
		{
			for (t = (r + 1); t < length; t++)
			{
				e[r] = s2[u];
				u++;
				r++;
			}
		}
	}

	return (e);
}
