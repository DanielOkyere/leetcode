#!/usr/bin/env python3
import math

def miniMaxSum(arr):
    comb = math.comb(len(arr), 4)
    sum = []
    for i in range(comb):
        sum += arr[i]
        result.append(sum)

    print(sum)
arr = [1,3,5,7,9]

miniMaxSum(arr)
