#!/usr/bin/env python3

"""
getting the diagonal difference
from hacker rank
"""

def diagonalDifference(a):
    ld = 0
    rd = 0
    n = len(a)
    tmp = n

    for row in range(len(a)):
        for col in range(n):
            if row == col:
                tmp -= 1
                ld += a[row][col]
                rd += a[row][tmp]
    return abs(ld - rd)
