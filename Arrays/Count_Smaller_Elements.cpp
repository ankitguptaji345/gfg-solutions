/*
Problem: Count of Smaller Elements
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy


Approach:

- Initialize count as 0
- Traverse the array once
- If the current element is less than or equal to x, increment count
- Return count


Time Complexity: O(n)
Space Complexity: O(1)
*/


#include <vector>
using namespace std;


class Solution {
public:
    int countOfElements(int x, vector<int>& arr) {

        int count = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] <= x)
            {
                count++;
            }
        }

        return count;
    }
};