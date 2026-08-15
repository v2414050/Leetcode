int countSymmetricIntegers(int low, int high) {
    int count = 0;
    
    for (int num = low; num <= high; num++) {
        if (num >= 10 && num <= 99) {
            if ((num / 10) == (num % 10)) {
                count++;
            }
        } else if (num >= 1000 && num <= 9999) {
            int left = num / 100;
            int right = num % 100;
            if ((left / 10 + left % 10) == (right / 10 + right % 10)) {
                count++;
            }
        }
    }
    
    return count;
}