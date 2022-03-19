#include <iostream>

using namespace std;

class Solution{
    public:
        int mySqrt(int x)
        {
            if (x==0)
                return 0;
            if (x==1)
                return 1;
            int left = 1;
            long right = x;
            while(left<right)
            {
                long mid = (left+right)/2;
                int temp = x/mid;
                if (temp==mid)
                    return mid;
                else if (temp<mid)
                    right = mid;
                else
                    left = mid+1;
            }
            return left-1;
        }
};

int main()
{
    int x = 3;
    Solution s;
    int ans = s.mySqrt(x);
    cout<<ans<<endl;
}