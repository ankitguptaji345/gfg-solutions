/*
Problem: Union of Two Arrays
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy


Approach:

- Use a set to store elements from both arrays
- Insert all elements of the first array into the set
- Insert all elements of the second array into the set
- The set automatically removes duplicate elements
- Convert the set into a vector
- Return the resulting vector


Time Complexity: O((n + m) log(n + m))
Space Complexity: O(n + m)
*/


#include <vector>
#include <set>
using namespace std;


class Solution {
public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {

        set<int> s;

        for (int i = 0; i < a.size(); i++)
        {
            s.insert(a[i]);
        }

        for (int i = 0; i < b.size(); i++)
        {
            s.insert(b[i]);
        }

        vector<int> result(s.begin(), s.end());

        return result;
    }
};