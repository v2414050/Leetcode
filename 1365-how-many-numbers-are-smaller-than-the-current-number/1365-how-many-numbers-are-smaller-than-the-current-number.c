/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int count[101] = {0};
    int* result = (int*)malloc(sizeof(int) * numsSize);
    
    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
    }
    int runningSum = 0;
    for (int i = 0; i <= 100; i++) {
        int temp = count[i];
        count[i] = runningSum;
        runningSum += temp;
    }
    for (int i = 0; i < numsSize; i++) {
        result[i] = count[nums[i]];
    }
    
    *returnSize = numsSize;
    return result;
}