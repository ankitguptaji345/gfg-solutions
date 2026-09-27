/*
Problem: Strings Rotations of Each Other
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Medium

Approach:
- If the two strings have different lengths, they cannot be rotations
- Join the first string with itself
- Check if the second string is present in the joined string

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <string>
using namespace std;

class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        if (s1.length() != s2.length()) {
            return false;
        }

        string temp = s1 + s1;

        return temp.find(s2) != string::npos;
    }
};