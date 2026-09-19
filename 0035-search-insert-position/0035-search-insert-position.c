int searchInsert(int* nums, int numsSize, int target) {
    int l = 0;
    int h = numsSize - 1;
    
    while (l <= h) {
        int m = l + (h - l) / 2;
        
        if (nums[m] == target) {
            return m;
        } else if (nums[m] < target) {
            l = m + 1; 
        } else {
            h = m - 1; 
        }
    }
    return l; 
}

// #136
// 191
// 131
// 190
//268 missing nu 
// /sinle nu 2