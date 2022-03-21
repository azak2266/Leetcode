#include <iostream>

using namespace std;

class Solution{
    public:
        
        int climbStairs(int n)
        {
            int ans[46];
            ans[0] = 0;
            ans[1] = 1;
            ans[2] = 2;
            if (n==0)
                return 0;
            else if (n==1)
            {
                return 1;
            }
            else if (n==2)
            {
                return 2;
            }
            for(int i=3;i<=n;i++)
            {
                ans[i] = ans[i-1] + ans[i-2];
            }
            return ans[n];
        }
};

int main()
{
    int x = 3;
    Solution s;
    int ans = s.climbStairs(x);
    cout<<ans<<endl;
}