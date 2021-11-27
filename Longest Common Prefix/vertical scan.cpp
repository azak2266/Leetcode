#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        for (int i = 0;i<strs[0].size();i++)
        {
            char c = strs[0][i];
            for (int j = 1;j<strs.size();j++)
            {
                if (c != strs[j][i] || i == strs[j].size())
                {
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0];
    }
};

int main(void)
{
    Solution s;
    string ans;
    // vector<string> input = {"dog", "racecar", "car"};
    // vector<string> input = {"flower","flow","flight"};
    vector<string> input = {"dog","racecar","car"};

    ans = s.longestCommonPrefix(input);
    cout << ans << endl;
    return 0;
}