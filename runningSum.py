#!/usr/bin/env python3
from typing import List


class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        result = []
        sum = 0
        for i in nums:
            sum += i
            result.append(sum)
            
        return result;
    
    
solution = Solution()
print(f"{solution.runningSum([1,2,3,4])}")