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
    int count(TreeNode *r){
        if(!r) return 0;
        int lef=count(r->left),rig=count(r->right);
        if(lef==-1||rig==-1||abs(lef-rig)>1) return -1;
        return 1+max(lef,rig);
    }
    bool isBalanced(TreeNode* root) {
        return count(root)!=-1;
    }
};