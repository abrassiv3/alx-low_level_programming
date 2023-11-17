#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * _strdup - function to return a pointer to a duplicate of  string str
  * @str: string to be duplicated
  * Return: NULL if str is null, else pointer to the duplicated string.
  * If memory is insufficient it returns null.
  */
char *_strdup(char *str)
{
	char *e;
	unsigned int length;
	unsigned int count;

	if (str == NULL || *str == '\0')
		return (NULL);

	e = malloc(sizeof(char) * strlen(str));

	if (e == NULL || *e == '\0')
		return (NULL);

	length = strlen(str);

	for (count = 0; count < length; count++)
		e[count] = str[count];

	return (e);
}
