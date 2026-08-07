int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int a = 0, b = numsSize - 1;
    int* ar = (int*)malloc(2 * sizeof(int));

    for (int a = 0; a < numsSize; a++) {
        for (b=a+1;b<numsSize;b++){
            if (nums[a] + nums[b] == target) {
                ar[0] = a;
                ar[1] = b;
                *returnSize = 2;
              return ar;
            }
        }
    }

    free(ar);
    *returnSize = 0;
    return NULL;
}