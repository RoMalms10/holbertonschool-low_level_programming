#!/usr/bin/python3
""" My module for calculating island perimeter """


def island_perimeter(grid):
    """ Takes a grid with an island in it and calculates the perimeter

    Arguments:
        grid (matrix): contains 1's and 0's to signify an island
                       1 for land, 0 for water
    """

    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                if row - 1 >= 0:
                    if grid[row - 1][col] == 0:
                        perimeter += 1
                else:
                    perimeter += 1
                if row + 1 <= len(grid) - 1:
                    if grid[row + 1][col] == 0:
                        perimeter += 1
                else:
                    perimeter += 1
                if col - 1 >= 0:
                    if grid[row][col - 1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1
                if col + 1 <= len(grid[row]) - 1:
                    if grid[row][col + 1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1
    return perimeter
