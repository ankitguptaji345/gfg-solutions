/*
Problem: Longest Distinct Characters in String
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Medium

Approach:
- Use a sliding window to keep track of a substring with unique characters
- Use a frequency array to count characters in the current window
- If a duplicate is found, move the left pointer until the duplicate is removed
- Keep updating the maximum length

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <string>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        int freq[256] = {0};
        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.length(); right++) 
        {
            freq[s[right]]++;

            while (freq[s[right]] > 1) 
            {
                freq[s[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};