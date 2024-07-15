//2124. Check if All A's Appears Before All B's LEET-CODE

//Given a string s consisting of only the characters 'a' and 'b', return true if every 'a' appears before every 'b' in the string. Otherwise, return false.
Example 1:
//Input: s = "aaabbb"
Output: true
Explanation:
The 'a's are at indices 0, 1, and 2, while the 'b's are at indices 3, 4, and 5.
Hence, every 'a' appears before every 'b' and we return true.

CODE-
  class Solution {
public:
    bool checkString(string s) {
        int blength = 100;
        int alength = -1;
        int sl = s.length();
        for (int i = 0; i < sl; i++) {
            if (s[i] == 'a') {
                alength = i;
            }
            if (s[i] == 'b') {
                blength = i;
            }
            if (alength > blength) {
                return false;
            }
        }
        return true;
    }
};

