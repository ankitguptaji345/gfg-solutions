/*
Problem: Move All Zeroes to End
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy

Approach:

- Traverse the array and keep track of the position
  where the next non-zero element should be placed.
- Move all non-zero elements to the front.
- Fill the remaining positions with zeroes.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {

        int index = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0) {
                arr[index] = arr[i];
                index++;
            }
        }

        for (int i = index; i < arr.size(); i++) {
            arr[i] = 0;
        }
    }
};