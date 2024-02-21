#!/usr/bin/python3
"""make made me engry"""

def island_perimeter(grid):
    """Get the perimeter of the grid."""
    perimeter = 0
    for row in range(len(grid)):
        for cell in range(len(grid[row])):
            if grid[row][cell] == 0:
                continue
            try:
                perimeter += 4 - (
                        grid[row - 1][cell] +
                        grid[row + 1][cell] +
                        grid[row][cell - 1] +
                        grid[row][cell + 1]
                        )
            except IndexError:
                return island_perimeter(padding(grid))
            return perimeter

def padding(grid):
    """adds a padding for a grid to ignore the IndexError"""
    empty_row = [[0 for any in grid[0]]]
    new_grid = [[0] + row + [0] for row in grid]
    return empty_row + new_grid + empty_row
