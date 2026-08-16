int divisorSubstrings(int num, int k) {
   long long i = num;
    int count = 0;
    long long mod = (long long)pow(10, k);

    while (i >= mod / 10 && i > 0) {
        long long c = i % mod;
        if (c != 0 && num % c == 0) {
            count++;
        }
        i /= 10;
    }
    return count;
}