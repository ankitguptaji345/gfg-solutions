/*
Problem: Repeated Character
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Basic

Approach:

- Count the frequency of every character
- Traverse the string from left to right
- The first character whose frequency is greater than 1 is the answer
- If no character repeats, return '#'

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <string>
using namespace std;

class Solution {
public:
    char firstRep(string s) {

        int freq[26] = {0};

        for (char c : s)
        {
            freq[c - 'a']++;
        }

        for (char c : s)
        {
            if (freq[c - 'a'] > 1)
            {
                return c;
            }
        }

        return '#';
    }
};