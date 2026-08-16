/*
Problem: Leaders in an Array
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy


Approach:

- Start traversing the array from right to left
- Keep track of the largest element seen so far
- If the current element is greater than or equal to largest,
  it is a leader
- Add the leader to the result vector
- Update largest
- Since leaders are collected from right to left,
  reverse the result before returning it


Time Complexity: O(n)
Space Complexity: O(n)
*/


#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<int> leaders(vector<int>& arr) {

        int largest = arr[arr.size() - 1];

        vector<int> result;

        for (int i = arr.size() - 1; i >= 0; i--)
        {
            if (arr[i] >= largest)
            {
                largest = arr[i];
                result.push_back(largest);
            }
        }

        reverse(result.begin(), result.end());

        return result;
    }
};