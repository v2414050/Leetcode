class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n + 1, 0);
        vector<int> result;

        for (int num : nums) {
            count[num]++;
        }

        for (int i = 1; i <= n; i++) {
            if (count[i] == 0) {
                result.push_back(i); 
            }
        }

        return result;
    }
};