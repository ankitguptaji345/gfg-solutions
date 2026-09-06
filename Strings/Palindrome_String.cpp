/*
Problem: Palindrome String
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy


Approach:

- Store a copy of the original string
- Reverse the given string using reverse()
- Compare the reversed string with the original string
- If both strings are equal, the string is a palindrome
- Otherwise, return false


Time Complexity: O(n)
Space Complexity: O(n)
*/


#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool isPalindrome(string& s) {

        string check = s;

        reverse(s.begin(), s.end());

        if (s == check)
        {
            return true;
        }

        return false;
    }
};