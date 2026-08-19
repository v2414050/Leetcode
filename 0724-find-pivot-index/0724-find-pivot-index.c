int pivotIndex(int* nums, int n) {
    int sum=nums[0],left =0 ;
    for (int i = 1;i<n;i++){
        sum+=nums[i];
    }
    // if (sum ==0){
    //     return 0;
    // }
    for (int i = 0; i < n; i++) {
        if (left == sum - left - nums[i]) {
            return i;
        }
        left += nums[i];
    }
        return-1;
}