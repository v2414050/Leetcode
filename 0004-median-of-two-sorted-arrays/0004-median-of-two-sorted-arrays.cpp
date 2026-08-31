class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int totalSize = m + n;
        
        vector<int> arr(totalSize);
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

        if (totalSize % 2 == 0) {
            return (arr[totalSize / 2] + arr[(totalSize / 2) - 1]) / 2.0;
        } else {
            return arr[totalSize / 2];
        }
    }
};