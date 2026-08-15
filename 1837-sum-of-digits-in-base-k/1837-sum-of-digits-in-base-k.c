int sumBase(int n, int k) {
    int  i=0;
    while(n>0){
        i+=n%k;
        n/=k;
    }
    return i;
}