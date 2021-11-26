#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> rus;
        int point = 0;
        while(point<nums.size()&&rus.size()==0)
        {
            for (int i = point+1; i < nums.size(); i++)
            {
                if (nums[point] + nums[i] == target)
                {
                    rus.push_back(point);
                    rus.push_back(i);
                    break;
                }
            }
            point++;
        }
        return rus;
    }
};

int main()
{
    vector<int> rus;
    Solution s;
    vector<int> num = {2, 5, 5, 11};int target = 10;
    // vector<int> num = {3,2,4};int target = 6;
    // vector<int> num = {3,3};int target = 6;
    rus = s.twoSum(num, target);
    for (int i = 0; i < rus.size(); i++)
    {
        cout << rus[i] << endl;
    }
    return 0;
}