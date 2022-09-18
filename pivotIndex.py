#!/usr/bin/env python3
""" Finds the pivot index """
from typing import List

class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        l_sum = 0
        r_sum = sum(nums)
        
        for i in range(len(nums)):
            r_sum -= nums[i]
            l_sum += nums[i - 1] if i > 0 else 0
            
            if r_sum == l_sum: return i
            
        return -1