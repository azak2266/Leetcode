#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        
        for(int i=1;i<=n;i++)
        {
            if (i%3==0 && n%5==0)
            {
                ans.push_back("FizzBuzz");
            }
            else if(i%3==0)
            {
                ans.push_back("Fizz");
            }
            else if(i%5==0)
            {
                ans.push_back("Buzz");
            }
            else
                ans.push_back(to_string(i));
        }
        return ans;
    }
};


int main()
{
    Solution s;
    vector<string> ans;
    ans = s.fizzBuzz(3);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}