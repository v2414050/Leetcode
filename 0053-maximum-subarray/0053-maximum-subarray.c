int maxSubArray(int* nums, int numsSize) {
    int max = INT_MIN; 
    int c=0 ,b=nums[0];
    if (numsSize==0){
        return 0;
    }
    if (numsSize==1){
        return nums[0];
    }
    for (int i =0 ; i<numsSize ; i ++){
        c+=nums[i];
        if (c<0){
            c=0;
        }
       else if (c>max){
            max=c;
        }
        if (b<nums[i]){
            b=nums[i];
        }
    }
    return (max>b)?max:b;
}