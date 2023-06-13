#include <stdlib.h>
#include "main.h"
/**
 * free_grid - entry function
 * @grid:value
 * @height:value
 */
void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
{
for (; height >= 0; height--)
{ free(grid[height]); }
free(grid);
}
}

