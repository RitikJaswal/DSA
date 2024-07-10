//LEET-CODE:
//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

//You must implement a solution with a linear runtime complexity and use only constant extra space.

//Example 1:

//Input: nums = [2,2,1]
//Output: 1


CODE:

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i<nums.size()-1 && nums[i] == nums[i + 1]) {
                i++;
            }
            else{
                return nums[i];
            }
        }
        return -1;
    }
};

Second CODE:

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};
