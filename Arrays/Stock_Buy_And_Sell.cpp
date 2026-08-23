/*
Problem: Stock Buy and Sell
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Medium

Approach:

- Initialize profit as 0
- Traverse the array from left to right
- If the current day's price is greater than the previous day's price, add the difference to profit
- This allows multiple buy and sell transactions
- Return the maximum profit

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
public:
    int stockBuySell(vector<int> &arr) {

        int profit = 0;

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] > arr[i - 1])
            {
                profit += arr[i] - arr[i - 1];
            }
        }

        return profit;
    }
};