#include <iostream>
#include <string>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> plusOne(vector<int>& digits)
        {
            int n = digits.size()-1;
            for(int i=n;i>=0;i--)
            {
                digits[i]+=1;
                if (digits[i]<10)
                {
                    return digits;
                }
                digits[i] = 0;
            }
            digits[0] = 1;
            digits.push_back(0);
            return digits;
        }
};

int main()
{
    // vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    // vector<int> nums = {1};
    vector<int> nums = {7,9,9};
    Solution s;
    vector<int> ans = s.plusOne(nums);
    for (int i = 0; i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}