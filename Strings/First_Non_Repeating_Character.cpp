/*
Problem: First Non-Repeating Character
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy

Approach:

- Create a frequency array of size 26
- Count the frequency of every character
- Traverse the string again
- Return the first character whose frequency is 1
- If no such character exists, return '$'

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <string>
using namespace std;

class Solution {
public:
    char nonRepeatingChar(string &s) {

        int freq[26] = {0};

        for (char c : s)
        {
            freq[c - 'a']++;
        }

        for (char c : s)
        {
            if (freq[c - 'a'] == 1)
            {
                return c;
            }
        }

        return '$';
    }
};