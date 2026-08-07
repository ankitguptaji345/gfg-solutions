/*
Problem: Max Element in Array
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy

Approach:
- Traverse the array once
- Keep track of the maximum element

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largest(vector<int> &arr) {

        int maxi = arr[0];

        for(int i = 1; i < arr.size(); i++) {
            maxi = max(maxi, arr[i]);
        }

        return maxi;
    }
};