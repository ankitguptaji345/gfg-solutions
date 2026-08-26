/*
Problem: Find Duplicates in an Array
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Medium

Approach:
- Use one set to keep track of elements already seen.
- If an element is already present in the set, it is a duplicate.
- Store duplicates in another set to avoid adding the same duplicate multiple times.
- Convert the duplicate set into a vector.

Time Complexity: O(n log n)
Space Complexity: O(n)
*/

#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {

        vector<int> ans;

        set<int> seen;
        set<int> duplicate;

        for (int i = 0; i < arr.size(); i++) {

            if (seen.find(arr[i]) != seen.end()) {
                duplicate.insert(arr[i]);
            }
            else {
                seen.insert(arr[i]);
            }
        }

        for (auto x : duplicate) {
            ans.push_back(x);
        }

        return ans;
    }
};