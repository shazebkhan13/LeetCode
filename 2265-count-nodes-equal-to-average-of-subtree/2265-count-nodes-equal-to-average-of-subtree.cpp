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
    int ans=0;
    pair<int,int> helper(TreeNode* r,int& ans){
        if(!r) return {0,0};
        pair<int,int> lef=helper(r->left,ans),rig=helper(r->right,ans);
        int sum=lef.first+r->val+rig.first,cnt=lef.second+1+rig.second;
        if(sum/cnt==r->val) ans++;
        return {sum,cnt};
    }
    int averageOfSubtree(TreeNode* root) {
        helper(root,ans);
        return ans;
    }
};