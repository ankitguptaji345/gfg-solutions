/*
Problem: Longest Palindromic Substring
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Medium

Approach:
- Consider every character as the center of a palindrome
- Expand around the center for odd and even length palindromes
- Keep track of the longest palindrome found

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <string>
using namespace std;

class Solution {
  public:
    string longestPalindrome(string &s) {
        int start = 0;
        int maxLen = 1;

        for (int i = 0; i < s.length(); i++) 
        {
            int left = i;
            int right = i;

            while (left >= 0 && right < s.length() && s[left] == s[right]) 
            {
                if (right - left + 1 > maxLen) 
                {
                    start = left;
                    maxLen = right - left + 1;
                }

                left--;
                right++;
            }

            left = i;
            right = i + 1;

            while (left >= 0 && right < s.length() && s[left] == s[right]) 
            {
                if (right - left + 1 > maxLen) 
                {
                    start = left;
                    maxLen = right - left + 1;
                }

                left--;
                right++;
            }
        }

        return s.substr(start, maxLen);
    }
};