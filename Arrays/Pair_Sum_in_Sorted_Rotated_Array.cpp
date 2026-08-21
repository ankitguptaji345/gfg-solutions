/*
Problem: Pair Sum in a Sorted and Rotated Array
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Medium

Approach:

- Find the pivot index where the sorted array is rotated
- Set low to the pivot (smallest element)
- Set high to the index before the pivot (largest element)
- Use two pointers in circular manner
- If the sum equals target, return true
- If the sum is smaller than target, move low forward
- If the sum is greater than target, move high backward
- Continue until low and high meet
- Return false if no pair is found

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        
        int n = arr.size();

        int pivot = 0;

        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                pivot = i;
                break;
            }
        }

        int low = pivot;
        int high = (pivot - 1 + n) % n;

        while (low != high) {

            int sum = arr[low] + arr[high];

            if (sum == target)
                return true;

            if (sum < target)
                low = (low + 1) % n;
            else
                high = (high - 1 + n) % n;
        }

        return false;
    }
};