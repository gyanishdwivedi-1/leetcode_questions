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
   
    int  dominant(TreeNode* &root,int &count){
        if(root==NULL){
        return 0;
        }
       
        int ans1=dominant(root->left,count);
        int ans2=dominant(root->right,count);
        int ans=max(ans1,ans2);
        if(root->val>=ans){
        ans=root->val;
        count=count+1;
        }
        return ans;

    }
    int countDominantNodes(TreeNode* root) {
       int count=0;
       int maxi=0;
        int ans=dominant(root,count);
        return count;
    }
};