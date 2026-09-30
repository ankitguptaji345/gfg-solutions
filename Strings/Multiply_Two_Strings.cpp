/*
Problem: Multiply Two Strings
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Medium

Approach:
- Check and store the sign of both numbers
- Remove the sign and leading zeros
- Multiply the digits using an array
- Add the negative sign if exactly one number is negative

Time Complexity: O(n * m)
Space Complexity: O(n + m)
*/

#include <string>
#include <vector>
using namespace std;

class Solution {
  public:
    string multiplyStrings(string &s1, string &s2) {
        bool neg1 = false;
        bool neg2 = false;

        if (s1[0] == '-') {
            neg1 = true;
            s1 = s1.substr(1);
        }

        if (s2[0] == '-') {
            neg2 = true;
            s2 = s2.substr(1);
        }

        int i = 0;
        while (i < s1.length() && s1[i] == '0') {
            i++;
        }

        s1 = s1.substr(i);

        i = 0;
        while (i < s2.length() && s2[i] == '0') {
            i++;
        }

        s2 = s2.substr(i);

        if (s1.empty() || s2.empty()) {
            return "0";
        }

        int n = s1.length();
        int m = s2.length();

        vector<int> result(n + m, 0);

        for (int i = n - 1; i >= 0; i--) 
        {
            for (int j = m - 1; j >= 0; j--) 
            {
                int mul = (s1[i] - '0') * (s2[j] - '0');

                int pos1 = i + j;
                int pos2 = i + j + 1;

                int sum = mul + result[pos2];

                result[pos2] = sum % 10;
                result[pos1] += sum / 10;
            }
        }

        string ans = "";

        for (int num : result) 
        {
            if (ans.empty() && num == 0) {
                continue;
            }

            ans += char(num + '0');
        }

        if (neg1 != neg2) {
            ans = "-" + ans;
        }

        return ans;
    }
};