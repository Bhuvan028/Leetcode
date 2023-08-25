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
    unordered_map<TreeNode*,int> m;
    int ans = 0;
    int ha(TreeNode* root){
        if(root==nullptr)return 0;
        m[root] = 1 + max(ha(root->left),ha(root->right));
        return m[root];
        
    }
    void h(TreeNode* root){
        if(root==nullptr)return;
        ans = max(m[root->left]+m[root->right],ans);
        h(root->left);
        h(root->right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ha(root);
        h(root);
        return ans;
    }
};