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
   
    void cons(int s,int e,vector<int> nums,TreeNode* &root){

        if(s>e) return ;
        int maxi=INT_MIN;
        int x=0;
        for(int i=s;i<=e;i++){
            if(maxi<nums[i]){
                maxi=nums[i];
                x=i;
            }
        }
        TreeNode* a=new TreeNode(maxi);
        root=a;
        cons(s,x-1,nums,root->left); 
        cons(x+1,e,nums,root->right); 
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* root=NULL;
        cons(0,nums.size()-1,nums,root);
        return root;
    }
};