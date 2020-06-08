#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> ans;
        map<int, int> indexMap;
        map<int, int>::iterator iter;

        for(int i=0; i<nums.size(); i++)
        {
            iter = indexMap.find(target-nums[i]);
            if(iter != indexMap.end())
            {
                ans.push_back(iter->second);
                ans.push_back(i);
                return ans;
            }
            else 
                indexMap.insert(pair<int, int>(nums[i], i));
        }

        return ans;
	}
};

int main()
{
	vector<int> nums = { 2, 7, 11, 15 };
	int target = 9;

	vector<int> r = Solution().twoSum(nums, target);
	for (int i = 0; i < r.size(); i++)
		cout << r[i] << " ";
	cout << endl;
}