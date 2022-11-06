#!/usr/bin/env python3

"""
Solution for flipping matrix game
HackerRank solutions
"""


def flipping_matrix(a):
    """
    Accepts an array and returns with
    max value
    """
    max_value = 0
    total = 0
    n = int(len(a) / 2)
    for i in range(n):
        for j in range(n):
            max_value = 0
            max_value = max(a[i][j], max_value)
            max_value = max(a[i][2 * n - j - 1],max_value)
            max_value = max(a[2 * n - i - 1][j], max_value)
            max_value = max(a[2 * n - i - 1][2 * n - j - 1], max_value)

            total += max_value
    return total



if __name__ == '__main__':
    new_matrix = [[112, 42, 83, 119], [56, 125, 56, 49], [15, 78, 101, 43],[62, 98, 114, 108]]
    print(flipping_matrix(new_matrix))
