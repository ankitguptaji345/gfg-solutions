/*
Problem: Reverse a String
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy


Approach:

- Use the built-in reverse() function
- reverse() reverses the characters of the string in-place
- Pass s.begin() and s.end() to reverse the complete string
- Return the reversed string


Time Complexity: O(n)
Space Complexity: O(1)
*/


#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    string reverseString(string& s) {

        reverse(s.begin(), s.end());

        return s;
    }
};