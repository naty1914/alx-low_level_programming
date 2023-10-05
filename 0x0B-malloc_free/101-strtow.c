#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array
 * @grid: grid to free
 * @height: height of the grid
 *
 * Return: no return
 */

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer of array
 */
char **strtow(char *str)
{
	char **sout;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}
	sout = malloc((height + 1) * sizeof(char *));
	if (sout == NULL || height == 0)
	{
		free(sout);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				sout[i] = malloc((c - a1 + 2) * sizeof(char));
				if (sout[i] == NULL)
				{
					ch_free_grid(sout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			sout[i][j] = str[a1];
		sout[i][j] = '\0';
	}
	sout[i] = NULL;
	return (sout);
}

