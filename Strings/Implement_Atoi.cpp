/*
Problem: Implement Atoi
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Medium

Approach:
- Skip leading spaces
- Check for '+' or '-' sign
- Convert each digit into an integer
- Stop when a non-digit character is found
- Handle integer overflow

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <string>
#include <climits>
using namespace std;

class Solution {
  public:
    int myAtoi(string &s) {
        int i = 0;
        int sign = 1;
        long long result = 0;

        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        if (i < s.length() && (s[i] == '+' || s[i] == '-')) 
        {
            if (s[i] == '-') {
                sign = -1;
            }

            i++;
        }

        while (i < s.length() && s[i] >= '0' && s[i] <= '9') 
        {
            result = result * 10 + (s[i] - '0');

            if (sign * result > INT_MAX) {
                return INT_MAX;
            }

            if (sign * result < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return sign * result;
    }
};