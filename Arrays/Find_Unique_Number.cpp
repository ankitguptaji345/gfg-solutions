/*
Problem: Find Unique Number
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy


Approach:

- Initialize ans with 0
- XOR every element with ans
- Equal elements cancel each other because x ^ x = 0
- 0 does not affect XOR because 0 ^ x = x
- The remaining value is the unique element


Time Complexity: O(n)
Space Complexity: O(1)
*/


#include <vector>
using namespace std;


class Solution {
public:
    int findUnique(vector<int> &arr) {

        int ans = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            ans = ans ^ arr[i];
        }

        return ans;
    }
};