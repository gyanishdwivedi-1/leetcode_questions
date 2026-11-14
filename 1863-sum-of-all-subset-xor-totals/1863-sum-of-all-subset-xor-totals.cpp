class Solution {
public:
    int ans=0;
    void subs(int i,vector<int>& nums,int n,int &x){
        if(i==n){
            ans+=x;
            return ;
        }
        x=x^nums[i];
        subs(i+1,nums,n,x);
        x=x^nums[i];
        subs(i+1,nums,n,x);
    }
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        subs(0,nums,n,x);
        return ans;
    }
};