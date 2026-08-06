/*
---------------------------------------------------------
Problem: Reverse an Array
Platform: GeeksforGeeks
Problem Link: https://www.geeksforgeeks.org/problems/reverse-an-array/1

Topic: Arrays
Difficulty: Easy

Approach:
Use the two-pointer technique.
Initialize one pointer at the beginning of the array and
another at the end. Swap both elements and move the
pointers towards the center until they meet.

Algorithm:
1. Set left = 0.
2. Set right = arr.size() - 1.
3. While left < right:
   - Swap arr[left] and arr[right]
   - Increment left
   - Decrement right

Time Complexity: O(n)
Space Complexity: O(1)

Author: Ankit Gupta
---------------------------------------------------------
*/

#include <bits/stdc++.h>
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
