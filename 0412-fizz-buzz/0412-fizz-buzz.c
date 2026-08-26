/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **ans = (char**)malloc(sizeof(char*) * n);
    for(int i = 1; i <= n; i++) {
        if(i%15==0) {
            ans[i - 1] = "FizzBuzz";
        } else if(i % 3 == 0) {
            ans[i - 1] = "Fizz";
        } else if(i % 5 == 0) {
            ans[i - 1] = "Buzz";
        } else {
            ans[i - 1] = (char*)malloc(sizeof(char) * 12);
            sprintf(ans[i - 1], "%d", i);
        }

    }
    *returnSize=n;
    return ans;
}