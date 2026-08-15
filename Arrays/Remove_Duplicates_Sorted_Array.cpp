/*
Problem: Remove Duplicates Sorted Array
Platform: GeeksforGeeks
Topic: Arrays
Difficulty: Easy


Approach:

- The array is already sorted, so duplicate elements are next to each other
- Keep the first element as it is
- Compare each element with the previous element
- If the current element is different, it is a unique element
- Store the unique element at the current index position
- Create a result vector and store only the unique elements
- Return the result vector


Time Complexity: O(n)
Space Complexity: O(n)
*/


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> removeDuplicates(vector<int> &arr) {

        int index = 1;

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] != arr[i - 1])
            {
                arr[index] = arr[i];
                index++;
            }
        }

        vector<int> result;

        for (int i = 0; i < index; i++)
        {
            result.push_back(arr[i]);
        }

        return result;
    }
};