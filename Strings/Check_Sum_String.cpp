/*
Problem: Check Sum String
Platform: GeeksforGeeks
Topic: Strings
Difficulty: Medium

Approach:
- Try different ways to split the string into the first two numbers
- Add the two numbers using string addition
- Check if their sum matches the next part of the string
- Continue checking recursively with the next two numbers
- Return true if the complete string forms a sum sequence

Time Complexity: O(n^3)
Space Complexity: O(n)
*/

#include <string>
#include <algorithm>
using namespace std;

class Solution {
  public:

    string add(string a, string b) {
        string ans = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0)
                sum += a[i--] - '0';

            if (j >= 0)
                sum += b[j--] - '0';

            ans += char(sum % 10 + '0');
            carry = sum / 10;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

    bool check(string &s, int pos, string a, string b) {
        if (pos == s.length())
            return true;

        string sum = add(a, b);

        if (s.compare(pos, sum.length(), sum) != 0)
            return false;

        return check(s, pos + sum.length(), b, sum);
    }

    bool isSumString(string &s) {
        int n = s.length();

        for (int i = 1; i < n; i++) {
            for (int j = 1; i + j < n; j++) {

                if (i > 1 && s[0] == '0')
                    break;

                if (j > 1 && s[i] == '0')
                    break;

                string a = s.substr(0, i);
                string b = s.substr(i, j);

                if (check(s, i + j, a, b))
                    return true;
            }
        }

        return false;
    }
};