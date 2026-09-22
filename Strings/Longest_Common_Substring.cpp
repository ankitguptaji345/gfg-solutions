/*
Problem: Longest Common Substring
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Medium

Approach:
- Use dynamic programming to compare characters of both strings
- If characters are equal, extend the current common substring
- If characters are different, reset the value to 0
- Keep track of the maximum length found

Time Complexity: O(n * m)
Space Complexity: O(m)
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int longestCommonSubstr(string& s1, string& s2) {
        int n = s1.length();
        int m = s2.length();
        int ans = 0;

        vector<int> prev(m + 1, 0);
        vector<int> curr(m + 1, 0);



        for (int i = 1; i <= n; i++) 
        {
            for (int j = 1; j <= m; j++) 
            {
                if (s1[i - 1] == s2[j - 1]) 
                {
                    curr[j] = 1 + prev[j - 1];
                    ans = max(ans, curr[j]);
                }
                else 
                {
                    curr[j] = 0;
                }
            }

            prev = curr;
        }

        return ans;
    }
};