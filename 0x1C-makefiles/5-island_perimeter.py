#!/usr/bin/python3
"""This file defines an island perimeter measuring function"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (list): Represents the grid where 1 represents land and 0 represents water.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    height = len(grid)
    width = len(grid[0])

    for t in range(height):
        for u in range(width):
            if grid[t][u] == 1:
                perimeter += 4

                if t > 0 and grid[t - 1][u] == 1:
                    perimeter -= 2
                    
                if u > 0 and grid[t][u - 1] == 1:
                    perimeter -= 2

    return perimeter

    
