#!/usr/bin/env python3

def lonelyNumber(arr):
    """
    Determine a unique number
    """
    dc = {}
    uniq = []
    count = 0
    for i in range(len(arr)):
        count = 1
        if arr[i] not in uniq:
            dc.update({arr[i]: count})
            uniq.append(arr[i])
        else:
            count = count + 1
            dc.update({arr[i]: count})

    for k, v in dc.items():
        if v == 1:
            return k



a = [1,2,3,4,3,2,1]
print(lonelyNumber(a))
