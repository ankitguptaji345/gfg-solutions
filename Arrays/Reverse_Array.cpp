/*
Problem: Reverse an Array
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy

Approach:
- Use the two-pointer technique.
- Swap elements from both ends until the pointers meet.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void reverseArray(vector<int> &arr) {
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
};