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
    unordered_map<TreeNode*, vector<int>> dp;
    int solve(TreeNode* root,int t){
        if(root==NULL) return 0;
        if(!dp.count(root)){
            dp[root]=vector<int>(2,-1);
        }else if(dp[root][t]!=-1){
            return dp[root][t];
        }

        if(t){
            return solve(root->left,0)+solve(root->right,0);
        }
        
        int take=root->val+solve(root->left,1)+solve(root->right,1);
        
        int skip=solve(root->left,0)+solve(root->right,0);
        
        return dp[root][t]=max(take,skip);
    }
    int rob(TreeNode* root) {
        return solve(root,0);
    }
};