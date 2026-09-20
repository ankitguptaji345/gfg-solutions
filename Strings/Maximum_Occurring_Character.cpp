/*
Problem: Maximum Occurring Character
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy

Approach:
- Count the frequency of each character
- Traverse the string and find the character with the highest frequency
- If frequencies are equal, choose the lexicographically smaller character

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <string>
using namespace std;

class Solution {
  public:
    char getMaxOccurringChar(string& s) {
        int freq[256] = {0};

        for (char c : s) {
            freq[(unsigned char)c]++;
        }

        char ans = s[0];

        for (char c : s) {
            if (freq[(unsigned char)c] > freq[(unsigned char)ans] ||
                (freq[(unsigned char)c] == freq[(unsigned char)ans] && c < ans)) {
                ans = c;
            }
        }

        return ans;
    }
};