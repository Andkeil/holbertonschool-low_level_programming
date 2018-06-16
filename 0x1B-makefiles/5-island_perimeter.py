#!/usr/bin/python3
"""
Island Perimeter Algo Module
"""


def island_perimeter(grid):
    """
    Method to return perimeter of island passed in
    1 = Land, 0 = Water
    """
    perimeter = 0
    height = (len(grid[0]) - 1)
    width = (len(grid) - 1)
    for x in range(height + 1):
        for y in range(width + 1):
            if grid[y][x] == 1:
                if x == 0 or grid[y][x - 1] == 0:
                    perimeter += 1
                if x == height or grid[y][x + 1] == 0:
                    perimeter += 1
                if y == 0 or grid[y - 1][x] == 0:
                    perimeter += 1
                if y == width or grid[y + 1][x] == 0:
                    perimeter += 1
    return perimeter
