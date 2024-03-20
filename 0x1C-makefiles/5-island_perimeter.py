#!/usr/bin/python3
"""This file defines an island perimeter measuring function"""

def island_perimeter(grid):
    """Return the perimeter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing  an island
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
                if (t > 0 and grid[t - 1][u] == 1):
                    perimeter -= 2
                if (u > 0 and grid[t][u - 1] == 1):
                    perimeter -= 2
    return perimeter

    
