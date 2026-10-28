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
     void jai(TreeNode* &root,int s,int &sum){
        if(root==NULL) return;
        
       
        jai(root->right,s,sum);
         sum+=root->val;
         root->val=sum;
        jai(root->left,s,sum);
    }
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        jai(root,0,sum);
        return root;
    }
};