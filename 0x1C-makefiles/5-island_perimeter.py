#!/usr/bin/python3
"""exercise 5"""


def island_perimeter(grid):
    """returns perimeter of an island"""

    per = 0
    for f in range(len(grid)):
        for c in range(len(grid[0])):
            if grid[f][c] == 1:
                if c == len(grid) - 1 or grid[f][c + 1] == 0:
                    per = per + 1
                if c == 0 or grid[f][c - 1] == 0:
                    per = per + 1
                if f == len(grid[0]) or grid[f + 1][c] == 0:
                    per = per + 1
                if f == 0 or grid[f - 1][c] == 0:
                    per = per + 1
    return per
