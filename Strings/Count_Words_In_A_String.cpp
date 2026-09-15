/*
Problem: Count Words in a String
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy

Approach:

- Traverse the string character by character
- Keep track of whether we are currently inside a word
- When a non-space character starts a new word, increase the count
- Spaces, tabs and newlines mark the end of a word

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <string>
using namespace std;

class Solution {
public:
    int countWords(string &s) {

        int count = 0;
        bool inWord = false;

        for (char c : s)
        {
            if (c != ' ' && c != '\t' && c != '\n')
            {
                if (!inWord)
                {
                    count++;
                    inWord = true;
                }
            }
            else
            {
                inWord = false;
            }
        }

        return count;
    }
};