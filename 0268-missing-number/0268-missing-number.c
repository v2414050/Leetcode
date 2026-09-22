int missingNumber(int* nums, int numsSize) {
    int sum = 0 , mx = INT_MIN , m =1;
    for(int i = 0 ; i< numsSize ; i++){
        sum+=nums[i];
        if (mx<nums[i]){
            mx=nums[i];
        }
        if (nums[i]==0)
            m=0;
    }
    if (m){
        return 0;
    }

    int b = (mx*(mx+1))/2;
    if (b==sum){
        return mx+1;
    }
    return b-sum;
}