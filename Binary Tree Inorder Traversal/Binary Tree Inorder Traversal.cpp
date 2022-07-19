#include <iostream>
#include <vector>
#include <stack>
using namespace std;


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
            if (!root) return ans;

            stack<TreeNode *> s;
            TreeNode *current = root;
            while (current || !s.empty())
            {
                if (current){
                    s.push(current);
                    current = current->left;
                }
                else{
                    TreeNode *node = s.top();
                    s.pop();
                    ans.push_back(node->val);
                    current = node->right;
                }
            }
            return ans;
    }
};

int main(){
    //input1
    // vector<int> nums1 = {1,2,3,0,0,0};
    // vector<int> nums2 = {2,5,6};
    // int m = 3;
    // int n = 3;

    // //input2
    // vector<int> nums1 = {1};
    // vector<int> nums2 = {};
    // int m = 1;
    // int n = 0;

    //input3
    vector<int> nums1 = {2,0};
    vector<int> nums2 = {1};
    int m = 1;
    int n = 1;

    Solution s;
    s.merge(nums1,m,nums2,n);
    for (int &v:nums1)
        cout<<v<<endl;
}