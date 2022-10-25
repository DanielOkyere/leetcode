#!/usr/bin/env python3

"""
Counting sort from hacker rank
"""

import math
import os
import random
import re
import sys


def countingSort(arr):
    # Write your code here
    s = set(arr)
    l = [0] * 100
    for i in s:
        l[i] = arr.count(i)

    return l


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = countingSort(arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')
    fptr.close()
