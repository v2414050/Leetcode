int countSymmetricIntegers(int low, int high) {
    int count = 0;
    
    for (int num = low; num <= high; num++) {
        int temp = num;
        int len = 0;
        
        while (temp > 0) {
            len++;
            temp /= 10;
        }
        
        if (len % 2 != 0) {
            continue;
        }
        
        int half = len / 2;
        int right = num;
        int sum1 = 0;
        int sum2 = 0;
        
        for (int i = 0; i < half; i++) {
            sum2 += right % 10;
            right /= 10;
        }
        
        int left = right;
        for (int i = 0; i < half; i++) {
            sum1 += left % 10;
            left /= 10;
        }
        
        if (sum1 == sum2) {
            count++;
        }
    }
    
    return count;
}