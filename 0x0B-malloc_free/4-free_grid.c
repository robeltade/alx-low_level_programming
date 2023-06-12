#include <stdlib.h>
#include "main.h"
/**
 * free_grid - entry function
 * @grid:value
 * @height:value
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid(i));
}
free(grid);
}


