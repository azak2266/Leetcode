#include <iostream>
#include <string>
#include<vector>
using namespace std;

class Solution{
    public:
        int maxSubArray(vector<int>& nums)
        {
            int low = 0;
            int high = nums.size()-1;
            int maximum = subarray(nums,low,high);
            return 0;
        }
        int subarray(vector<int>& nums,int low,int high)
        {
            if (low == high)
            {
                return nums[high];
            }
            int mid = (low+high)/2;
            int left_subarry = subarray(nums,low,mid);
            int right_subarry = subarray(nums,mid+1,high);
            int cross_subarry = max_crossing_subarray(nums,low,mid,high);

            return maximum(left_subarry,right_subarry,cross_subarry);
        }

        int maximum(int a, int b, int c)
        {
        if (a>=b && a>=c)
            return a;
        else if (b>=a && b>=c)
            return b;
        return c;
        }
        // function to find maximum sum of subarray crossing the middle element
        int max_crossing_subarray(vector<int>& nums, int low, int mid, int high)
        {
        /*
            Initial left_sum should be -infinity.
            One can also use INT_MIN from limits.h
        */
        int left_sum = -1000000;
        int sum = 0;
        int i;

        /*
            iterating from middle
            element to the lowest element
            to find the maximum sum of the left
            subarray containing the middle
            element also.
        */
        for (i=mid; i>=low; i--)
        {
            sum = sum+ar[i];
            if (sum>left_sum)
            left_sum = sum;
        }

        /*
            Similarly, finding the maximum
            sum of right subarray containing
            the adjacent right element to the
            middle element.
        */
        int right_sum = -1000000;
        sum = 0;

        for (i=mid+1; i<=high; i++)
        {
            sum=sum+ar[i];
            if (sum>right_sum)
            right_sum = sum;
        }

        /*
            returning the maximum sum of the subarray
            containing the middle element.
        */
        return (left_sum+right_sum);
        }
};

int main()
{
    // vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    // vector<int> nums = {1};
    vector<int> nums = {3, -1, -1, 10, -3, -2, 4};
    Solution s;
    int ans = s.maxSubArray(nums);
    cout<<ans<<endl;
}