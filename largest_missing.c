int largestInteger(int* nums, int numsSize, int k) {
    int sub_count[51] = {0};


    for (int i = 0; i <= numsSize - k; i++) {
        int seen[51] = {0};
        for (int j = 0; j < k; j++) {
            int val = nums[i + j];
            if (!seen[val]) {
                seen[val] = 1;
                sub_count[val]++;
            }
        }
    }
    int max_val = -1;
    for (int v = 0; v <= 50; v++) {
        if (sub_count[v] == 1 && v > max_val) {
            max_val = v;
        }
    }

    return max_val;
}
