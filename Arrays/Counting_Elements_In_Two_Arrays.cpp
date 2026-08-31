/*
Problem: Counting Elements in Two Arrays
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Medium

Approach:

- Sort array b in ascending order
- For every element in array a, find the first element greater than it in b
- Use upper_bound() to find that position
- The position gives the number of elements in b that are less than or equal to a[i]
- Store the count in the answer vector

Time Complexity: O(n log n)
Space Complexity: O(n)
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        
        sort(b.begin(), b.end());
        
        vector<int> ans;
        
        for(int i = 0; i < a.size(); i++)
        {
            int count = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
            ans.push_back(count);
        }
        
        return ans;
    }
};