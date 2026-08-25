/*
Problem: Merge Two Sorted Arrays
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Medium

Approach:
- Compare the largest element of array a with the smallest element of array b
- If a[i] is greater, swap both elements
- Continue until all elements are in their correct array
- Sort both arrays individually

Time Complexity: O(n log n + m log m)
Space Complexity: O(1)
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void mergeArrays(vector<int>& a, vector<int>& b) {

        int i = a.size() - 1;
        int j = 0;

        while(i >= 0 && j < b.size()) {

            if(a[i] > b[j]) {
                swap(a[i], b[j]);
                i--;
                j++;
            }
            else {
                break;
            }
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
};