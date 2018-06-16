#!/usr/bin/python3
"""
Island Perimeter Algo
"""


def island_perimeter(grid):
    """
    Method to return perimeter of island passed in
    1 = Land, 0 = Water
    """
    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid)):
            if grid[x][y] is 1:
                if x is 0 or grid[x - 1][y] is 0:
                    perimeter += 1
                if x is len(grid) - 1 or grid[x + 1][y] is 0:
                    perimeter += 1
                if y is 0 or grid[x][y-1] is 0:
                    perimeter += 1
                if y is len(grid[x]) - 1 or grid[x][y + 1] is 0:
                    perimeter += 1
    return perimeter
