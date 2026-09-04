/*
Problem: Trapping Rain Water
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Hard

Approach:

- Use two pointers: left and right
- Keep track of the maximum height seen from the left and right
- If arr[left] is smaller, process the left side
- Otherwise, process the right side
- Water trapped at a position depends on the smaller boundary
- Move the corresponding pointer inward
- Add the trapped water to the answer

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int maxWater(vector<int> &arr) {
        
        int n = arr.size();
        
        int left = 0;
        int right = n - 1;
        
        int leftMax = 0;
        int rightMax = 0;
        
        int water = 0;
        
        while(left <= right)
        {
            if(arr[left] <= arr[right])
            {
                if(arr[left] >= leftMax)
                {
                    leftMax = arr[left];
                }
                else
                {
                    water += leftMax - arr[left];
                }
                
                left++;
            }
            else
            {
                if(arr[right] >= rightMax)
                {
                    rightMax = arr[right];
                }
                else
                {
                    water += rightMax - arr[right];
                }
                
                right--;
            }
        }
        
        return water;
    }
};