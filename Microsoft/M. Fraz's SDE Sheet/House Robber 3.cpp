class Solution {
public:
    pair<int,int>dfs(TreeNode* &root)
    {
        if(!root)
            return {0,0};
        pair<int,int>leftp=dfs(root->left);
        pair<int,int>rightp=dfs(root->right);
        return {
            max(leftp.first,leftp.second)+max(rightp.first,rightp.second),
            root->val+leftp.first+rightp.first
        };
    }

    int rob(TreeNode* root) {
        pair<int,int>p=dfs(root);
        return max(p.first,p.second);
    }
};