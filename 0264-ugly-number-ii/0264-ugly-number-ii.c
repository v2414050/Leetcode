#include <stdlib.h>

int nthUglyNumber(int n) {
    int dp[n];
    dp[0] = 1;
    
    int p2 = 0, p3 = 0, p5 = 0;
    
    for (int i = 1; i < n; i++) {
        int n2 = dp[p2] * 2;
        int n3 = dp[p3] * 3;
        int n5 = dp[p5] * 5;
        
        int n_val = n2 < n3 ? n2 : n3;
        n_val = n_val < n5 ? n_val : n5;
        
        dp[i] = n_val;
        
        if (n_val == n2) p2++;
        if (n_val == n3) p3++;
        if (n_val == n5) p5++;
    }
    
    return dp[n - 1];
}