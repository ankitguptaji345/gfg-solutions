/*
Problem: Minimum Indexed Character
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy

Approach:

- Mark all characters present in s2
- Traverse s1 from left to right
- The first character found in s2 gives the minimum index
- If no common character is found, return -1

Time Complexity: O(n + m)
Space Complexity: O(1)
*/

#include <string>
using namespace std;

class Solution {
public:
    int minIndexChar(string &s1, string &s2) {

        bool present[26] = {false};

        for (char c : s2)
        {
            present[c - 'a'] = true;
        }

        for (int i = 0; i < s1.length(); i++)
        {
            if (present[s1[i] - 'a'])
            {
                return i;
            }
        }

        return -1;
    }
};