//34. Find First and Last Position of Element in Sorted Array LEET_CODE
//Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
//If target is not found in the array, return [-1, -1].
//You must write an algorithm with O(log n) runtime complexity.
//Example 1:
//Input: nums = [5,7,7,8,8,10], target = 8
//Output: [3,4]

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        int n=nums.size();
        for(int i =0;i<n;i++)
        {
            if(nums[i]==target){
                if(res[0]==-1){
                    res[0]=i;
                }
                res[1]=i;
            }
        }
        return res;
    }
};
