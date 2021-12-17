#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        if (nums.size()==0||nums.size()==1)
        {
            return n;
        }
        int j=0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[j])
            {
                j++;
                nums[j]=nums[i];
            }

        }
        return j+1;
    }
};

int main()
{
    // vector<int> nums = {1,1,2};
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    vector<int> expectedNums;
    Solution s;
    int k = s.removeDuplicates(nums);
    cout<<k<<endl;
    
}