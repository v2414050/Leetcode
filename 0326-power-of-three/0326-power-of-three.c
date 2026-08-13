bool isPowerOfThree(int n) {
      long i =1;
    L1:
        if(i<=n){
            if(i==n||n==1)
        return true;
        i=i*3;
        goto L1;
        }
    
   return false; 

}