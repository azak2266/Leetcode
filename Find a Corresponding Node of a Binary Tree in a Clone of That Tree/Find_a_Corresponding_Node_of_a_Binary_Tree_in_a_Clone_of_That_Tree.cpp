#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x),left(NULL),right(NULL) {};
};

class Solution{
    public:
        TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target)
        {
            int targetValue = target->val;
            return search(cloned,targetValue);
        }
        TreeNode* search(TreeNode* cloned,int targetValue)
        {
            if (cloned == NULL)
                return NULL;
            if (cloned->val == targetValue)
                return cloned;
            TreeNode* left = search(cloned->left,targetValue);
            if (left != NULL)
                return left;
            TreeNode* right = search(cloned->right,targetValue);
            if (right != NULL)
                return right;
            return NULL;
        }
        
};


int main()
{
    //練習建立二元樹
    //先有一個root的指標儲存樹根的指標。
    vector<string> input = {"7","4","3","null","null","6","19"};

    TreeNode* root = new TreeNode(7);
    root->left = new TreeNode(4);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(19);

    TreeNode* root2 = new TreeNode(7);
    root2->left = new TreeNode(4);
    root2->right = new TreeNode(3);
    root2->right->left = new TreeNode(6);
    root2->right->right = new TreeNode(19);

    Solution s;
    s.getTargetCopy(root,root2,root->right);

    cout<<endl;
    
}