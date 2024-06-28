//Leet_code 16. 3Sum Closest
//Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.
//Return the sum of the three integers.
//You may assume that each input would have exactly one solution.
//Example 1:
//Input: nums = [-1,2,1,-4], target = 1
//Output: 2
//Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int new_nums = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size() - 2; ++i) {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int current = nums[i] + nums[j] + nums[k];
                if (abs(target - current) < abs(target - new_nums)) {
                    new_nums = current;
                }
                if (current < target) {
                    ++j;
                } else if (current > target) {
                    --k;
                } else {
                    return current;
                }
            }
        }
        return new_nums;
    }
};
