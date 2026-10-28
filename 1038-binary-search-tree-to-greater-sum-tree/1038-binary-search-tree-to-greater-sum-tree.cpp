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
    void bst(TreeNode* &root,vector<int>&in){
        if(root==NULL) return;
        
        bst(root->left,in);
        in.push_back(root->val);
        bst(root->right,in);
    }
    void jai(TreeNode* &root,int s,int &sum){
        if(root==NULL) return;
        
       
        jai(root->right,s,sum);
         sum+=root->val;
         root->val=sum;
        jai(root->left,s,sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        if(root==NULL) return NULL;
        vector<int>in;
        bst(root,in);
        reverse(in.begin(),in.end());
        int n=in.size();
        vector<int>pref(n);
        pref[0]=in[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+in[i];
            
        }
        reverse(pref.begin(),pref.end());
        int sum=0;
        jai(root,0,sum);
        return root;
    }
};