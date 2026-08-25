class Solution {
public:
    bool checkDivisibility(int n) {
        int b=n;
        int sum =0 , p =1 ;
        while (b>0){
            sum +=b%10;
            p*=b%10;
            b/=10; 
        }
        int t = sum + p ;
        if (n % t==0){
            return true ;
        }
        return false;
    }
};