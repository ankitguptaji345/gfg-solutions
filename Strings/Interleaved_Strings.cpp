/*
Problem: Interleaved Strings
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Medium

Approach:
- Use dynamic programming to check whether s3 can be formed from s1 and s2
- At each position, check whether the next character can come from s1 or s2
- Store already calculated results to avoid repeating work

Time Complexity: O(n * m)
Space Complexity: O(n * m)
*/

#include <string>
#include <vector>
using namespace std;

class Solution {
  public:
    bool isInterleave(string& s1, string& s2, string& s3) {
        int n = s1.length();
        int m = s2.length();

        if (n + m != s3.length()) {
            return false;
        }

        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

        dp[0][0] = true;

        for (int i = 0; i <= n; i++) 
        {
            for (int j = 0; j <= m; j++) 
            {
                if (i > 0 && s1[i - 1] == s3[i + j - 1]) 
                {
                    dp[i][j] = dp[i][j] || dp[i - 1][j];
                }

                if (j > 0 && s2[j - 1] == s3[i + j - 1]) 
                {
                    dp[i][j] = dp[i][j] || dp[i][j - 1];
                }
            }
        }

        return dp[n][m];
    }
};