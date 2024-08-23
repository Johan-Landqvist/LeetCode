class Solution {
public
    vectorint twoSum(vectorint& nums, int target) {
        int size = 3;
        for (int i = 0; i  size - 1; i++) {
            for (int n = i+1; n  size; n++) {
                if (nums[i] + nums[n] == target) {
                    return {i, n};
                }
            }
        }
        return {0,0};
    }
};