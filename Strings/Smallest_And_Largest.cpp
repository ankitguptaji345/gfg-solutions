/*
Problem: Smallest and Largest word
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy

Approach:

- Build each word character by character
- When a space is found, process the completed word
- Keep track of the smallest and largest word
- For equal minimum length, keep the first occurring word
- For equal maximum length, keep the last occurring word
- Process the last word after the loop

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> smallerAndLarge(string &s) {

        string word;
        string smallest;
        string largest;
        bool first = true;

        for (char c : s)
        {
            if (c != ' ')
            {
                word += c;
            }
            else
            {
                if (word.empty())
                    continue;

                if (first)
                {
                    smallest = word;
                    largest = word;
                    first = false;
                }
                else
                {
                    if (word.length() < smallest.length())
                    {
                        smallest = word;
                    }

                    if (word.length() >= largest.length())
                    {
                        largest = word;
                    }
                }

                word.clear();
            }
        }
        
        if (!word.empty())
        {
            if (first)
            {
                smallest = word;
                largest = word;
            }
            else
            {
                if (word.length() < smallest.length())
                {
                    smallest = word;
                }

                if (word.length() >= largest.length())
                {
                    largest = word;
                }
            }
        }

        return {smallest, largest};
    }
};