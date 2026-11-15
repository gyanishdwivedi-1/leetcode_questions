class Solution {
public: 
    int maxi=INT_MIN;
    int count=0;
   // vector<int>ans;
     void subs(int i,vector<int>& nums,int n,int x){
        if(i==n){
            maxi=max(maxi,x);
            return ;
        }
        x=x|nums[i];
        subs(i+1,nums,n,x);
        x=x|nums[i];
        subs(i+1,nums,n,x);
    }
     void subst(int i,vector<int>& nums,int n,int y){
        if(i==n){
           if(y==maxi){
            
                count++;
           }
            return ;
        }
     
        subst(i+1,nums,n,y|nums[i]);
    
        subst(i+1,nums,n,y);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int x=0;
        int y=0;
        int n=nums.size();
        subs(0,nums,n,x);
        cout<<maxi<<" ";
        subst(0,nums,n,y);
        return count;
    }
};