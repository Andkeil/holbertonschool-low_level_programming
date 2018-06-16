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
    for x in range(len(grid)):
        for y in range(len(grid)):
            if grid[x][y] == 1:
                if x == 0 or grid[x - 1][y] == 0:
                    perimeter += 1
                if x == len(grid) - 1 or grid[x + 1][y] == 0:
                    perimeter += 1
                if y == 0 or grid[x][y-1] == 0:
                    perimeter += 1
                if y == len(grid[x]) - 1 or grid[x][y + 1] == 0:
                    perimeter += 1
                if x - 1 == -1 or y - 1 == -1:
                    perimeter += 1
    return perimeter
