/*
Problem: Kadane's Algorithm
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Medium

Approach:

- Keep track of the maximum sum ending at the current position
- For every element, decide whether to:
  - Start a new subarray from the current element
  - Extend the previous subarray
- Store the maximum sum found so far
- Return the maximum subarray sum

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        
        int res = arr[0];
        int maxEnding = arr[0];

        for (int i = 1; i < arr.size(); i++)
        {
            maxEnding = max(arr[i], maxEnding + arr[i]);
            res = max(res, maxEnding);
        }

        return res;
    }
};