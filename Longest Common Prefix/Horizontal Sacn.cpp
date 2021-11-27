#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        
        string prefix = strs[0];

        //two two lcp
        for (int i =1;i<strs.size();i++)
        {
            if (prefix == "")
            {
                return prefix;
            }
            string s = strs[i];
            prefix = prefix.substr(0,min(s.size(),strs[i].size()));

            for (int j =0;j<s.size();j++)
            {
                if (s[j] != prefix[j])
                {
                    prefix = prefix.substr(0,j);
                }
            }
        }
        return prefix;
    }
};

int main(void)
{
    Solution s;
    string ans;
    vector<string> input = {"dog", "racecar", "car"};
    // vector<string> input = {"flower","flow","flight"};

    ans = s.longestCommonPrefix(input);
    cout << ans << endl;
    return 0;
}