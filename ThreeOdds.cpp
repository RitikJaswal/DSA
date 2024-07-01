//1550. Three Consecutive Odds Leet-Code
//Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.
//Example 1:
//Input: arr = [2,6,4,1]
//Output: false
//Explanation: There are no three consecutive odds.

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if (arr.size()<=2)
        {
            return false;
        }
        for (int i=0;i<arr.size()-2;i++){
            if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0)
            {
                return true;
            }
        }
        return false;
    }
};
