#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free();
 *
 */

int *runningSum(int *nums, int numsSize, int *returnSize)
{
	*returnSize = numsSize;
	int sum, i;

	sum = 0;
	for (i = 0; i < numsSize; i++)
	{
		sum += nums[i];
		nums[i] = sum;
	}
	return (nums);
}

int main (void)
{
	int i,  value = 4;
	int nums[4] = {1,2,3,4};
	int returnSize[4] = {0, 0, 0, 0};
	int *ptr = runningSum(nums, value, returnSize );
	putchar('[');
	for (i = 0; i < value; i++ )
	{
		printf("%d", ptr[i]);
		if (i < value)
			printf(", ");
		else
			printf(" ");
	}
	putchar(']');
	return (0);
}