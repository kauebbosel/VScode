#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *returnArr = (int*)malloc(sizeof(int) * 2);
    returnArr[0] = 0;
    returnArr[1] = 0;
    
    for(int i = 0; i < numsSize; i++){
        for(int j = 0; j < numsSize; j++){
            if(nums[i] + nums[j] == target && i != j){
                *returnSize = 2;
                returnArr[0] = i;
                returnArr[1] = j;
                return returnArr;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}