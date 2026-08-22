/*
Problem: Majority Element
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Medium

Approach:

- Use Moore's Voting Algorithm to find a possible majority element
- Maintain a candidate and a count
- If count becomes 0, choose the current element as the new candidate
- If the current element is equal to the candidate, increase count
- Otherwise, decrease count
- After finding the candidate, count its actual occurrences
- If its count is greater than n/2, return the candidate
- Otherwise, return -1

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        
        int candidate = 0;
        int count = 0;
        
        for (int i = 0; i < arr.size(); i++)
        {
            if (count == 0)
            {
                candidate = arr[i];
            }
            
            if (arr[i] == candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        
        count = 0;
        
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == candidate)
            {
                count++;
            }
        }
        
        if (count > arr.size() / 2)
        {
            return candidate;
        }
        
        return -1;
    }
};