#include <iostream>
#include <vector>
#include<map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> rus;
        map<int, int> compare;
        map<int, int>::iterator iter;
        compare.insert(pair<int, int>(nums[0],0));
        for (int i = 1; i<nums.size();i++)
        {
            iter = compare.find(target-nums[i]);
            if (iter != compare.end())
            {
                rus.push_back(iter->second);
                rus.push_back(i);
                return rus;
            }
            else
            {
                compare[nums[i]]=i;
            }
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
    // s.twoSum(num, target);
    for (int i = 0; i < rus.size(); i++)
    {
        cout << rus[i] << endl;
    }
    return 0;
}