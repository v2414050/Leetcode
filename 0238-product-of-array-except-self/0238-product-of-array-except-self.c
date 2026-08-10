int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
     int* result = (int*)malloc(numsSize * sizeof(int));
    int* p = (int*)malloc(numsSize * sizeof(int));
    int* s = (int*)malloc(numsSize * sizeof(int));
    p[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        p[i] = p[i - 1] * nums[i - 1];
    }
    s[numsSize - 1] = 1;
    for (int i = numsSize - 2; i >= 0; i--) {
        s[i] = s[i + 1] * nums[i + 1];
    }
    for (int i = 0; i < numsSize; i++) {
        result[i] = p[i] * s[i];
    }
    *returnSize = numsSize;
    free(p);
    free(s);
    return result;

}