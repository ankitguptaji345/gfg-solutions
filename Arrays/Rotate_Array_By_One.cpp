/*
Problem: Rotate Array by One
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy


Approach:

- Store the last element in a temporary variable
- Traverse the array from right to left
- Move each element one position to the right
- Place the stored last element at index 0


Time Complexity: O(n)
Space Complexity: O(1)
*/


#include <vector>
using namespace std;


class Solution {
public:
    void rotate(vector<int>& arr) {

        int n = arr.size();

        int last = arr[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = last;
    }
};
