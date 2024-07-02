//350. Intersection of Two Arrays II Leet-Code
//Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
//Example 1:
//Input: nums1 = [1,2,2,1], nums2 = [2,2]
//Output: [2,2]

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       vector<int> nums3; 
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j])
                 {
                   nums3.push_back(nums1[i]);
                    nums2.erase(nums2.begin() + j); 
                   break;
                }
            }
        }
        return nums3;
    }
};
