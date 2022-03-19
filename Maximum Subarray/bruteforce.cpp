#include <iostream>
#include <string>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //brute force
        int size = nums.size();
        if (size == 1)
        {
            return nums[0];
        }
        
        int ans = INT_MIN;
        for (int i=0;i<size;i++)
        {
            for (int j=i,sum = 0;j<size; j++)
            {
                sum +=nums[j];
                ans = max(ans,sum);
            }
        }
        return ans;
    }
};

int main()
{
    // vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> nums = {1};
    // vector<int> nums = {1,2,3,4,5};
    Solution s;
    int ans = s.maxSubArray(nums);
    cout<<ans<<endl;
}