#include <stdio.h>


int* runningSum(int* nums, int numsSize, int* returnSize){
    int sum=0;

    *returnSize = numsSize;
    
    for(int i = 0; i < numsSize; i++){
        sum = sum + nums;
    }

}