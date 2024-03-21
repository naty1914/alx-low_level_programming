#!/usr/bin/python3
"""A function that calculate the perimeter of an island described in a grid """


def island_perimeter(grid):
    """ Returns  the perimeter of an island described in a grid"""
    perimeter = 0
    row = len(grid)
    col = len(grid[0])
    for x in range(row):
        for y in range(col):
            if grid[x][y] == 1:
                perimeter += 4
                if x > 0 and grid[x - 1][y] == 1:
                    perimeter -= 2
                if y > 0 and grid[x][y-1] == 1:
                    perimeter -= 2
    return perimeter
