/*
Problem: Find the Frequency
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy

Approach:

- Initialize count as 0
- Traverse the array once
- If the current element equals x, increment count
- Return count

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
public:
    int findFrequency(vector<int> arr, int x) {

        int count = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == x)
            {
                count++;
            }
        }

        return count;
    }
};