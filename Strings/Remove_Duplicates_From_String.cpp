/*
Problem: Remove Duplicates from a Given String
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy

Approach:
- Keep track of characters that have already appeared
- Traverse the string from left to right
- If the character is seen for the first time, add it to the answer
- Ignore characters that have already appeared

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string &s) {
        bool seen[256] = {false};
        string ans = "";

        for (char c : s) {
            if (!seen[(unsigned char)c]) {
                ans += c;
                seen[(unsigned char)c] = true;
            }
        }

        return ans;
    }
};