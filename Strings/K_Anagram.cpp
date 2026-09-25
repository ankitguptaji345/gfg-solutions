/*
Problem: k-Anagram
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Medium

Approach:
- First check if both strings have the same length
- Count the frequency of characters in both strings
- Find how many characters from s1 need to be changed
- If the required changes are at most k, return true

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <string>
using namespace std;

class Solution {
  public:
    bool areKAnagrams(string &s1, string &s2, int k) {
        if (s1.length() != s2.length()) {
            return false;
        }

        int freq[26] = {0};

        for (char c : s1) {
            freq[c - 'a']++;
        }

        for (char c : s2) {
            freq[c - 'a']--;
        }

        int changes = 0;

        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                changes += freq[i];
            }
        }

        return changes <= k;
    }
};