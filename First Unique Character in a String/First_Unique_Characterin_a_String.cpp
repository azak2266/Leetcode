#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
        {
           m[s[i]]+=1;
        }
        for(int i=0;i<s.size();i++)
        {
            if (m[s[i]]<2)
                return i;
        }
        return -1;
    }
};


int main()
{
    Solution s;
    int ans;
    string input = "aabb";
    ans = s.firstUniqChar(input);
    cout<<ans<<endl;
    //a 97 z 122
    // cout<<ans<<endl;
}