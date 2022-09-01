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
    int goodNodes(TreeNode* root) 
    {
        int count = 0;
        if(root == NULL)
            return -1;
        countGood(root , count , root -> val);
        return count;
    }
    
    void countGood(TreeNode* root,int &count,int maxValue)
    {
        if(!root)
            return;
        if(root -> val >= maxValue)
        {
            count += 1;
            maxValue = root -> val;
        }
        countGood(root -> left,count,maxValue);
        countGood(root -> right,count,maxValue);
    }
};