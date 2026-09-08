/*
Problem: Anagram
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy

Approach:

- If the lengths of both strings are different, they cannot be anagrams
- Sort both strings
- Compare the sorted strings
- If they are equal, return true
- Otherwise, return false

Time Complexity: O(n log n)
Space Complexity: O(1)
*/

#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool areAnagrams(string& s1, string& s2) {

        if (s1.length() != s2.length())
        {
            return false;
        }

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if (s1 == s2)
        {
            return true;
        }

        return false;
    }
};