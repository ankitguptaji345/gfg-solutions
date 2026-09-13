/*
Problem: Compress String
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy

Approach:

- Convert all characters to lowercase
- Count consecutive occurrences of each character
- When the character changes, add the character and its count to the answer
- Add the final character and its count after the loop

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    string compressString(string &s) {

        string ans = "";
        int count = 1;

        for (char &c : s)
        {
            c = tolower(c);
        }

        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
            {
                count++;
            }
            else
            {
                ans = ans + s[i - 1] + to_string(count);
                count = 1;
            }
        }
        ans = ans + s[s.length() - 1] + to_string(count);

        return ans;
    }
};