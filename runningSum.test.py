#!/usr/bin/env python3
""" Unittest for running Sum"""

import unittest

var = __import__('runningSum').Solution()

class TestRunningSum(unittest.TestCase):
    """Unittest class of solution"""
    def test_running_sum(self):
        arr = [1,2,3,4]
        self.assertTrue(var.runningSum(arr), [1,3,6,10])
        
        
if __name__ == "__main__":
    unittest.main()