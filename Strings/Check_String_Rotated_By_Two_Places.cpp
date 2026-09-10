/*
Problem: Check if String is Rotated by Two Places
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy

Approach:

- If the lengths are different, return false
- If the length is 2 or less, compare the strings directly
- Create left rotation by 2 places
- Create right rotation by 2 places
- Compare both rotations with s2
- If either matches, return true
- Otherwise, return false

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <string>
using namespace std;

class Solution {
public:
    bool isRotated(string& s1, string& s2) {

        int n = s1.length();
        if (s1.length() != s2.length())
        {
            return false;
        }    
        if (n <= 2)
        {
            return s1 == s2;
        }    
        string left = s1.substr(2) + s1.substr(0, 2);
        string right = s1.substr(n - 2) + s1.substr(0, n - 2);
        if (left == s2 || right == s2)
        {
            return true;
        }    
        return false;
    }
};