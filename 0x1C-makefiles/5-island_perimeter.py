#!/usr/bin/python3
"""Defines a function for finding perimeter of an island."""


def island_perimeter(grid):
    """Returns perimeter of an island.
    The grid represents water by 0 and land by 1.
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
