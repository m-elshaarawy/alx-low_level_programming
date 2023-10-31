#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: 2d arr
*/


int **alloc_grid(int width, int height)
{
	int **graph, i = 0;

	graph = malloc(sizeof(*graph) * height);

	if (width <= 0 || height <= 0 || graph == 0)
		return (NULL);

	for (i = 0; i < height ; i++)
	{
		graph[i] = malloc(sizeof(int) * width);

		if (graph[i] == 0)
		{
			while (i--)
			{
				free(graph[i]);
			}
			return (NULL);
		}
	}
	return (graph);
}
