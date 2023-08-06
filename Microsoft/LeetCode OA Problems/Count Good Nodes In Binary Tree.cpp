class Solution {
public:
    int dfs(TreeNode* root,int mx)
    {
        if(!root)
            return 0;
        if(root->val>=mx)
            return 1+dfs(root->left,root->val)+dfs(root->right,root->val);
        else
            return dfs(root->left,mx)+dfs(root->right,mx);
    }

    int goodNodes(TreeNode* root) {
        int mx=root->val;
        return dfs(root,mx);;
    }
};