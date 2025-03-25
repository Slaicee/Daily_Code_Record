/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int i, j = 0;
    int* result = malloc(2 * sizeof(int));
    *returnSize = 2;
    for (i = 0; i <= numsSize - 1; i++) {
        for (j = i + 1; j <= numsSize - 1; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}