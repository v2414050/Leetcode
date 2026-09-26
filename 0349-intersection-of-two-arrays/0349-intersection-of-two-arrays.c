/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int* intersection(int* nums1, int nums1Size,
                  int* nums2, int nums2Size,
                  int* returnSize) {

    qsort(nums2, nums2Size, sizeof(int), compare);

    int maxSize = nums1Size < nums2Size ? nums1Size : nums2Size;

    int* result = (int*)malloc(sizeof(int) * maxSize);

    *returnSize = 0;

    for (int i = 0; i < nums1Size; i++) {

        int low = 0;
        int high = nums2Size - 1;
        int foundInNums2 = 0;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums1[i] == nums2[mid]) {
                foundInNums2 = 1;
                break;
            }
            else if (nums1[i] < nums2[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        if (foundInNums2) {

            int alreadyExists = 0;

            for (int k = 0; k < *returnSize; k++) {
                if (result[k] == nums1[i]) {
                    alreadyExists = 1;
                    break;
                }
            }

            if (!alreadyExists) {
                result[*returnSize] = nums1[i];
                (*returnSize)++;
            }
        }
    }

    return result;
}