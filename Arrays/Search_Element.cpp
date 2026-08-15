/*
Problem: Search an Element in an Array
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy


Approach:

- Traverse the array from left to right
- Compare each element with x
- If x is found, return its index
- If x is not found, return -1


Time Complexity: O(n)
Space Complexity: O(1)
*/


#include <vector>
using namespace std;


class Solution {
public:
    int search(vector<int>& arr, int x) {

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == x)
            {
                return i;
            }
        }

        return -1;
    }
};