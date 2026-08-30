/*
Problem: Rearrange Array Alternately
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Medium

Approach:

- Sort the array in ascending order
- Use two pointers: i at the smallest element and j at the largest element
- Add the largest element first
- Then add the smallest element
- Move j backward and i forward
- Continue until all elements are processed
- Store the rearranged elements in a temporary vector
- Copy the temporary vector back into arr

Time Complexity: O(n log n)
Space Complexity: O(n)
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    void rearrange(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        
        vector<int> temp;
        
        int i = 0;
        int j = arr.size() - 1;
        
        while (i <= j) {
            
            temp.push_back(arr[j]);
            
            if (i != j) {
                temp.push_back(arr[i]);
            }
            
            j--;
            i++;
        }
        
        arr = temp;
    }
};