/*
Problem: Reverse Words
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy

Approach:
- Extract each word separated by '.'
- Ignore empty words caused by leading or trailing '.'
- Store the words in a vector
- Traverse the vector from last word to first
- Add '.' between the words

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseWords(string &s) {
        vector<string> words;
        int start = 0;

        while (start < s.length()) {
            int pos = s.find('.', start);

            if (pos == string::npos) {
                if (start < s.length())
                    words.push_back(s.substr(start));
                break;
            }

            if (pos > start)
                words.push_back(s.substr(start, pos - start));

            start = pos + 1;
        }

        string ans = "";

        for (int i = words.size() - 1; i >= 0; i--) {
            ans += words[i];

            if (i != 0)
                ans += '.';
        }

        return ans;
    }
};