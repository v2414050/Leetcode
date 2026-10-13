bool find132pattern(int* nums, int numsSize) {
    if (numsSize < 3) return false;

    int* min_left = (int*)malloc(numsSize * sizeof(int));
    min_left[0] = nums[0];
    for (int i = 1; i < numsSize; i++) {
        min_left[i] = (nums[i - 1] < min_left[i - 1]) ? nums[i - 1] : min_left[i - 1];
    }

    int* stack = (int*)malloc(numsSize * sizeof(int));
    int top = -1;
    
    for (int j = numsSize - 1; j >= 0; j--) {
        if (nums[j] > min_left[j]) {
            while (top >= 0 && stack[top] <= min_left[j]) {
                top--;
            }
            
            if (top >= 0 && stack[top] < nums[j]) {
                free(min_left);
                free(stack);
                return true;
            }
            
            stack[++top] = nums[j];
        }
    }

    free(min_left);
    free(stack);
    return false;
}