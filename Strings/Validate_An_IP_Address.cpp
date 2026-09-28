/*
Problem: Validate an IP Address
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Medium

Approach:
- Split the string using '.'
- Check that there are exactly 4 parts
- Each part must contain only digits
- No part can have leading zeros
- Each number must be between 0 and 255

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <string>
using namespace std;

class Solution {
  public:
    int isValid(string &s) {
        int count = 0;
        int num = 0;
        int digits = 0;

        for (int i = 0; i <= s.length(); i++) 
        {
            if (i == s.length() || s[i] == '.') 
            {
                if (digits == 0 || digits > 3) {
                    return 0;
                }

                if (digits > 1 && s[i - digits] == '0') {
                    return 0;
                }

                if (num > 255) {
                    return 0;
                }

                count++;
                num = 0;
                digits = 0;
            }
            else if (s[i] >= '0' && s[i] <= '9') 
            {
                num = num * 10 + (s[i] - '0');
                digits++;
            }
            else 
            {
                return 0;
            }
        }

        return count == 4;
    }
};