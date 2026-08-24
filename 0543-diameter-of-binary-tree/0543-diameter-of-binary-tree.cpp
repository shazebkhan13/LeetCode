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
    int rep(TreeNode* r,int& maxi){
        if(!r) return 0;
        int lef=rep(r->left,maxi),rig=rep(r->right,maxi);
        maxi=max(maxi,lef+rig);
        return 1+max(lef,rig);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        rep(root,ans);
        return ans;
    }
};