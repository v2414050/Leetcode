bool isPowerOfFour(int n) {
           double i =1;
    L1:
        if(i<=n){
            if(i==n||n==1)
        return true;
        i=i*4;
        goto L1;
        }
    
   return false; 
}