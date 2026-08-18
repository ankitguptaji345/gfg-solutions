/*
Problem: Rotate Array by N Elements
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Medium

Approach:

- Reduce d using d % n
- Reverse the first d elements
- Reverse the remaining elements
- Reverse the entire array
- This rotates the array in O(n) time without extra space

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotateArr(vector<int>& arr, int d) {

        int n = arr.size();

        d = d % n;

        reverse(arr.begin(), arr.begin() + d);

        reverse(arr.begin() + d, arr.end());

        reverse(arr.begin(), arr.end());
    }
};