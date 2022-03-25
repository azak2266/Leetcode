#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        int f=0;int b=0;
        for(int i=1;i<=n;i++)
        {
            f++;
            b++;
            if (f==3 && b==5)
            {
                ans.push_back("FizzBuzz");
                f=0;
                b=0;
            }
            else if(f==3)
            {
                f=0;
                ans.push_back("Fizz");
            }
            else if(b==5)
            {
                b=0;
                ans.push_back("Buzz");
            }
            else
            {
                ans.push_back(to_string(i));
            }
                
        }
        return ans;
    }
};


int main()
{
    Solution s;
    vector<string> ans;
    ans = s.fizzBuzz(3);
    cout<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}