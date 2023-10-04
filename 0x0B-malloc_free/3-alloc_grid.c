#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		matrix[m] = malloc(sizeof(int) * width);

		if (matrix[m] == NULL)
		{
			for (; m >= 0; m--)
				free(matrix[m]);

			free(matrix);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			matrix[m][n] = 0;
	}

	return (matrix);
}
