int pivotIndex(int* nums, int n) {
    int p[n],s[n],sum=nums[0];
     p[0]=0,s[0]=0;
    for (int i = 1;i<n;i++){
        p[i] = p[i - 1] + nums[i - 1];
        sum+=nums[i];
    }
    for (int i =0 ; i< n ;i++){
        s[i]=sum-p[i]-nums[i];
        if (s[i]==p[i]){
            return i;
        }
    }
        return-1;
}