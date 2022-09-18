#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"


/**
 * left_sum_of_index - calculates the left sum of the index
 * @index: index of the element
 * @arr: array to determine index element
 * Return: 0 if no sum exist, or sum of indexes
 */
int left_sum_of_index(int index, int *arr)
{
	int i, sum = 0;

	for (i = index; i >= 0; i--)
	{
		sum += arr[i];
	}
	return (sum);
}

/**
 * pivotIndex - find pivot Index
 * @arr: array to find pivot from
 * Return: index of pivot
 */
int pivotIndex(int *arr, int size)
{
	int i, r_sum, l_sum;

	for (i = 0; i < size; i++)
	{
		r_sum = right_sum_of_index(i, arr, size);
		l_sum = left_sum_of_index(i, arr);
		if (r_sum == l_sum)
			break;
		else if (r_sum != l_sum && i == size - 1)
		{
			i = -1;
			break;
		}
	}
	return (i);
}

/**
 * right_sum_of_index - calculates the right sum of index
 * @index: index to calculate sums from
 * @arr: array to determine sum
 * Return: 0 if no sum exist, or sum of indexes
 */
int right_sum_of_index(int index, int *arr, int size)
{
	int i, sum = 0;

	for (i = index; i < size; i++)
	{
		sum += arr[i];
	}
	return (sum);
}

/**
 * main - main function
 * Return: 0 if success or anynumber if fail
 */
int main(void)
{

	int arr[6] = {1, 7, 3, 6, 5, 6};
	int arr_1[3] = {1, 2, 3};
	int arr_2[3] = {2, 1, -1};

	printf("%d\n", pivotIndex(arr, 6));
	printf("%d\n", pivotIndex(arr_1, 3));
	printf("%d\n", pivotIndex(arr_2, 3));

	return (0);
}
