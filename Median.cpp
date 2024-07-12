//Leet-Code 
//Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

//The overall run time complexity should be O(log (m+n)).

//Example 1:

//Input: nums1 = [1,3], nums2 = [2]
//Output: 2.00000
//Explanation: merged array = [1,2,3] and median is 2.

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(nums1.size() + nums2.size());
        int sum = 0;
        double res;
        int n = result.size() ;

        // Copy elements from the first vector a into result
        for (size_t i = 0; i < nums1.size(); ++i) {
            result[i] = nums1[i];
        }

        // Copy elements from the second vector b into result, starting where a
        // ended
        for (size_t i = 0; i < nums2.size(); ++i) {
            result[nums1.size() + i] = nums2[i];
        }
        sort(result.begin(), result.end());
       
         if (n % 2 == 0) {
            // If even, average the two middle elements
            res= (result[n/2 - 1] + result[n/2]) / 2.0;
        } else {
            // If odd, return the middle element
            res= result[n/2];
        }
        return res;
    }
};
