/*
Problem: Missing And Repeating
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy

Approach:

- Create a frequency vector to store the count of each element
- Traverse the array and increase the frequency of each element
- Traverse from 1 to n
- If frequency is 2, the element is repeating
- If frequency is 0, the element is missing
- Return the repeating and missing elements

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        
        int n = arr.size();
        
        vector<int> freq(n + 1, 0);
        
        for(int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        
        int repeating = -1;
        int missing = -1;
        
        for(int i = 1; i <= n; i++)
        {
            if(freq[i] == 2)
                repeating = i;
            
            if(freq[i] == 0)
                missing = i;
        }
        
        return {repeating, missing};
    }
};