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
    int maxDiff(TreeNode * root, int maxm, int minm){
        if(root==NULL)
            return maxm- minm;
        //int ans = 0;
        maxm = max(maxm, root->val);
        minm = min(minm, root->val);
        //ans = max(ans, abs(maxm-minm));
        int mxL = maxDiff(root->left, maxm, minm);
        int mxR = maxDiff(root->right, maxm, minm);
        return max(mxL,mxR); 


    }

    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL)
            return 0;
        return maxDiff(root, root->val, root->val);

    }
};