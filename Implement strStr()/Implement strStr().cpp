#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(haystack == needle ||needle.empty())
            return 0;

        
        for(int i=0;i<haystack.size();i++)
        {
            if(needle.size()>haystack.size()-i)
            {
                return -1;
            }
            else
            {
                if(haystack[i]==needle[0])
                {
                    bool check = true;
                    int index = i+1;
                    for(int j=1;j<needle.size();j++)
                    {
                        if (needle[j]!=haystack[index])
                        {
                            check = false;
                            break;
                        }
                        index++;
                    }
                    if (check)
                        return i;
                    else
                        continue;
                }
            }
        }
        return -1;
    }
};

int main()
{
    string heystack = "mississippi";
    string needle = "issi";
    Solution s;
    int ans = s.strStr(heystack,needle);
    cout<<ans<<endl;
    
}