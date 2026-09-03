/*
Problem: Maximum Product Subarray
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Medium

Approach:

- Keep track of the maximum product ending at the current position
- Keep track of the minimum product ending at the current position
- A negative number can turn the minimum product into the maximum product
- If the current element is negative, swap the maximum and minimum products
- Update the maximum and minimum products
- Keep track of the overall maximum product

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int maxProduct(vector<int>& arr) {
        
        int n = arr.size();
        
        int maxProduct = arr[0];
        int minProduct = arr[0];
        int answer = arr[0];
        
        for(int i = 1; i < n; i++)
        {
            if(arr[i] < 0)
            {
                swap(maxProduct, minProduct);
            }
            
            maxProduct = max(arr[i], maxProduct * arr[i]);
            minProduct = min(arr[i], minProduct * arr[i]);
            
            answer = max(answer, maxProduct);
        }
        
        return answer;
    }
};