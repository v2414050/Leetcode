double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
  int m = nums1Size;
    int n = nums2Size;
    int totalSize = m + n;
    int* arr = (int*)malloc(totalSize * sizeof(int));
    
    int i = 0, j = 0, k = 0;
    while (j < m && k < n) {
        if (nums1[j] <= nums2[k]) {
            arr[i++] = nums1[j++];
        } else {
            arr[i++] = nums2[k++];
        }
    }
    while (j < m) {
        arr[i++] = nums1[j++];
    }
    while (k < n) {
        arr[i++] = nums2[k++];
    }
    
    double median;
    if (totalSize % 2 == 0) {
        median = (arr[totalSize / 2] + arr[(totalSize / 2) - 1]) / 2.0;
    } else {
        median = arr[totalSize / 2];
    }
    
    free(arr);
    return median;
}