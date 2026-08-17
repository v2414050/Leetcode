int countPrimes(int n) {
    if (n <= 2) return 0;
    int size = n / 2;
    bool *isComposite = (bool *)calloc(size, sizeof(bool));
    if (!isComposite) return 0;
    int count = 1; 
    for (int i = 1; 2 * i + 1 < n; i++) {
        if (!isComposite[i]) {
            count++;
            int prime = 2 * i + 1;
            if ((long long)prime * prime < n) {
                for (long long j = ((long long)prime * prime) / 2; j < size; j += prime) {
                    isComposite[j] = true;
                }
            }
        }
    }
    free(isComposite);
    return count;
}