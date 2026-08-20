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
    void trav(TreeNode *r,vector<int>& arr){
        if(!r) return;
        trav(r->left,arr);
        trav(r->right,arr);
        arr.push_back(r->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        trav(root,ans);
        return ans;
    }
};