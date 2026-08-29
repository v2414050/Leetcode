int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }
    if (dividend == 0) {
        return 0;
    }
    int negative = (dividend < 0) ^ (divisor < 0);
    long long abs_dividend = labs((long long)dividend);
    long long abs_divisor = labs((long long)divisor);
    long long count = 0;
    while (abs_dividend >= abs_divisor) {
        long long temp_divisor = abs_divisor;
        long long multiple = 1;
        while (abs_dividend >= (temp_divisor << 1)) {
            temp_divisor <<= 1;
            multiple <<= 1;
        }

        abs_dividend -= temp_divisor;
        count += multiple;
    }

    return negative ? -count : count;
}