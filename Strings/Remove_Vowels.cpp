/*
Problem: Remove Vowels from String
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy


Approach:

- Traverse the string character by character
- Check whether the current character is a vowel
- If it is not a vowel, add it to the result string
- Use push_back() to efficiently add each character
- Return the resulting string without vowels


Time Complexity: O(n)
Space Complexity: O(n)
*/


#include <string>
using namespace std;


class Solution {
public:
    string removeVowels(string& s) {

        string result = "";

        for (char c : s)
        {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            {
                result.push_back(c);
            }
        }

        return result;
    }
};