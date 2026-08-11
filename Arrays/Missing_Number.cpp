/*
Problem: Missing Number in Array
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy


Approach:

- Calculate the expected sum of numbers from 1 to N
- Calculate the actual sum of the array elements
- Subtract the actual sum from the expected sum
- The difference is the missing number


Time Complexity: O(n)
Space Complexity: O(1)
*/


#include <vector>
using namespace std;


class Solution {
public:
    int missingNum(vector<int>& arr) {

        long long sum = 0;
        int n = arr.size() + 1;

        for (int i = 0; i < arr.size(); i++)
        {
            sum = sum + arr[i];
        }

        long long total = 1LL * n * (n + 1) / 2;

        return total - sum;
    }
};