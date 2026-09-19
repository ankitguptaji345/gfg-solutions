/*
Problem: Recursively Remove All Adjacent Duplicates
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Medium

Approach:
- Traverse the string and find groups of adjacent duplicate characters
- Keep only characters that appear once in their group
- Repeat the process until no more adjacent duplicates are removed
- Use a loop instead of recursion

Time Complexity: O(n^2)
Space Complexity: O(n)
*/

#include <string>
using namespace std;

class Solution {
  public:
    string removeUtil(string &s) {
        while (true) 
        {
            string temp = "";
            int i = 0;

            while (i < s.length()) 
            {
                int j = i;

                while (j < s.length() && s[j] == s[i]) 
                {
                    j++;
                }

                if (j - i == 1) 
                {
                    temp += s[i];
                }

                i = j;
            }

            if (temp == s) 
            {
                return s;
            }

            s = temp;
        }
    }
};