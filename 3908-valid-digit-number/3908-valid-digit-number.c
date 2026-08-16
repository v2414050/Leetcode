bool validDigit(int n, int x) {
    int count=0;
    while(n>0){
        if (n/10==0&&n==x){
            return false ;
        }
        else if (n%10==x){
            count++;
        }
        n/=10;
    }
    return count?true:false;
}