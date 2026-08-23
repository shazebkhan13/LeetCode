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
    int moves(vector<int>& arr){
        map<int,int> mp;
        for(int i=0;i<arr.size();i++) mp[arr[i]]=i;
        int i=0,cnt=0;
        for(auto it:mp){
            if(it.first!=arr[i]){
                cnt++;
                mp[arr[i]]=it.second;
                swap(arr[i],arr[it.second]);
            }
            i++;
        }
        return cnt;
    }
    int minimumOperations(TreeNode* root) {
        int ans=0;
        queue<TreeNode*> q;
        vector<int> temp;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode *r=q.front();
                q.pop();
                temp.push_back(r->val);
                if(r->left) q.push(r->left);
                if(r->right) q.push(r->right);
            }
            ans+=moves(temp);
            temp.clear();
        }
        return ans;
    }
};