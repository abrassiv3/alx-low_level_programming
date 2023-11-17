#include "main.h"
#include "stdlib.h"
/**
  * _strdup - function to return a pointer to a duplicate of  string str
  * @str: string to be duplicated
  * Return: NULL if str is null, else a pointer to the duplicated string. If memory is insufficient it returns null.
  */
char *_strdup(char *str)
{
	char e;
	unsigned int length;
	int count;

	if (str = NULL)
		return (NULL);

	length = malloc(sizeof(char) * strlen(str));

	for (count = 0; count < length; count++)
		e[count] = str;

	return (*e);
}
