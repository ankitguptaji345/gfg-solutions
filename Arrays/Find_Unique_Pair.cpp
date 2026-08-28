/*
Problem: Find Unique Pair
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy

Approach:

- XOR all elements of the array
- Duplicate elements cancel each other using XOR
- The result contains XOR of the two unique elements
- Find the rightmost set bit to separate the two unique elements
- Divide the elements into two groups using that bit
- XOR each group to get the two unique elements
- Return the two elements in sorted order

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> findUniquePair(vector<int>& arr) {
        // code here
        
        int xorValue = 0;
        
        for(int i = 0; i < arr.size(); i++)
        {
            xorValue = xorValue ^ arr[i];
        }
        
        int setBit = xorValue & (-xorValue);
        
        int first = 0;
        int second = 0;
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] & setBit)
            {
                first = first ^ arr[i];
            }
            else
            {
                second = second ^ arr[i];
            }
        }
        
        if(first < second)
        {
            return {first, second};
        }
        else
        {
            return {second, first};
        }
    }
};