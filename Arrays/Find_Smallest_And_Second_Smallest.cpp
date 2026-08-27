/*
Problem: Find the Smallest and Second Smallest Element in an Array
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy

Approach:
- Keep track of the smallest and second smallest elements
- Traverse the array once
- If a new smallest element is found, move the old smallest to second smallest
- Otherwise, update second smallest if the current element is smaller
- Ignore duplicate values of the smallest element
- Return -1 if a second distinct smallest element does not exist

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
#include <climits>

using namespace std;

class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int Smallest = arr[0];
        int secondSmallest = INT_MAX;

        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] < Smallest)
            {
                secondSmallest = Smallest;
                Smallest = arr[i];
            }
            else if(arr[i] < secondSmallest && arr[i] != Smallest)
            {
                secondSmallest = arr[i];
            }
        }

        if(secondSmallest == INT_MAX)
        {
            return {-1};
        }

        return {Smallest, secondSmallest};
    }
};