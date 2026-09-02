/*
Problem: Product Array Puzzle
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Medium

Approach:

- Create an answer vector initialized with 1
- Traverse from left to right
- Store the product of all elements before the current element
- Traverse from right to left
- Multiply each answer with the product of all elements after the current element
- This avoids division and also handles zero values correctly
- Return the answer vector

Time Complexity: O(n)
Space Complexity: O(1) extra space
*/

#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        
        int n = arr.size();
        
        vector<int> ans(n, 1);
        
        int left = 1;
        
        for(int i = 0; i < n; i++)
        {
            ans[i] = left;
            left = left * arr[i];
        }
        
        int right = 1;
        
        for(int i = n - 1; i >= 0; i--)
        {
            ans[i] = ans[i] * right;
            right = right * arr[i];
        }
        
        return ans;
    }
};