/*
Problem: Second Largest in array
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy

Approach:

- Keep track of the largest and second largest elements
- Traverse the array once
- If the current element is greater than the largest,
  update second largest with the old largest
- Otherwise, update second largest when the current element
  is greater than it and different from the largest

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {

        int largest = arr[0];
        int secondLargest = -1;

        for (int i = 1; i < arr.size(); i++) {

            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            }
            else if (arr[i] > secondLargest && arr[i] != largest) {
                secondLargest = arr[i];
            }
        }

        return secondLargest;
    }
};