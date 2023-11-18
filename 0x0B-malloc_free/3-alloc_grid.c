#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * alloc_grid - returns pointer to 2-dimensional array of integers
  * @width: width of the grid
  * @height: height of grid
  * Return: NULL on failure, else grid
  */
int **alloc_grid(int width, int height)
{
	int heightcount, widthcount, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * height);

	if (array == NULL)
		return (NULL);

	for (heightcount = 0; heightcount < height; heightcount++)
	{
		array[heightcount] = malloc(sizeof(int) * width);

		if (array[heightcount] == NULL)
		{
			for (; heightcount >= 0; heightcount--)
				free(array[heightcount]);

			free(array);
			return (NULL);
		}
	}

	for (heightcount = 0; heightcount < height; heightcount++)
	{
		for (widthcount = 0; widthcount < width; widthcount++)
		{
			array[heightcount][widthcount] = 0;
		}
	}

	return (array);
}
