/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char** ans = (char**)malloc(sizeof(char*) * n);

    for (int i = 1; i <= n; i++) {
        // Allocate space for max string size (digits up to 10^4 or "FizzBuzz" + '\0')
        ans[i - 1] = (char*)malloc(sizeof(char) * 9);

        if (i % 15 == 0) {
            strcpy(ans[i - 1], "FizzBuzz");
        } else if (i % 3 == 0) {
            strcpy(ans[i - 1], "Fizz");
        } else if (i % 5 == 0) {
            strcpy(ans[i - 1], "Buzz");
        } else {
            sprintf(ans[i - 1], "%d", i);
        }
    }

    return ans;
}