//Leet-Code
55. Jump Game
You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.

Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.


  CODE:
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > maxReach) {
                return false; // If the current index is greater than the maximum reachable index, we can't proceed.
            }
            maxReach = max(maxReach, i + nums[i]);
            if (maxReach >= nums.size() - 1) {
                return true; // If the maximum reachable index is beyond or at the last index, we can reach the end.
            }
        }
        return false;
    }
};
