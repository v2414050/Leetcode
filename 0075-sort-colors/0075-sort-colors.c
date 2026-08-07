void sortColors(int* nums, int n) {
    int red = 0, white = 0, blue = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            red++;
        } else if (nums[i] == 1) {
            white++;
        } else if (nums[i] == 2) {
            blue++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i < red) {
            nums[i] = 0;
        } else if (i < red + white) {
            nums[i] = 1;
        } else {
            nums[i] = 2;
        }
    }
}