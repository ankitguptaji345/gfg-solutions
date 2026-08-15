/*
Problem: Check if an Array is Sorted
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy


Approach:

- Traverse the array and compare adjacent elements
- If arr[i] is greater than arr[i+1], the array is not sorted
- Return false immediately if a violation is found
- If the complete array is checked without any violation, return true


Time Complexity: O(n)
Space Complexity: O(1)
*/


#include <vector>
using namespace std;


class Solution {
public:
    bool isSorted(vector<int>& arr) {

        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                return false;
            }
        }

        return true;
    }
};