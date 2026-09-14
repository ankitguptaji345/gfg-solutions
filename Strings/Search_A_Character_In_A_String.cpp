/*
Problem: Search a Character in a String
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Easy

Approach:

- Traverse the string from left to right
- Compare each character with the given character
- Return the index when the character is found for the first time
- If the character is not found, return -1

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int searchCharacter(char *s, char ch) {

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == ch)
            {
                return i;
            }
        }

        return -1;
    }
};