#include <iostream>
#include <string>
#include<vector>
using namespace std;

class Solution{
    public:
        int maxSubArray(vector<int>& nums)
        {
            int res = nums[0];
            int curr = nums[0];
            int n = nums.size();
            for (int i=1;i<n; i++)
            {
                curr+=nums[i];
                if(curr<0||nums[i]>curr)
                {
                    curr = nums[i];
                }
                if (res<curr)
                    res = curr;
            }
            return res;
        }
};

int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    // vector<int> nums = {1};
    // vector<int> nums = {1,2,3,4,5};
    Solution s;
    int ans = s.maxSubArray(nums);
    cout<<ans<<endl;
}