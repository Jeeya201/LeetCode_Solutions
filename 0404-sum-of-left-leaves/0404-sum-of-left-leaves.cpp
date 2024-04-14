//Kind of NU ; ratta types

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
void solv(TreeNode* &root, int &ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left!=NULL)
        {
            if(root->left->left==NULL&& root->left->right==NULL)
            {
                ans+=root->left->val;
            }
        }
        
        solv(root->left,ans);
        solv(root->right,ans);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        solv(root,sum);
        return sum;
    }
};