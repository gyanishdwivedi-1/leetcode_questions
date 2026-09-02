class Solution {
public:
    vector<vector<int>>ans;
    void nds(int i,vector<int> &v,vector<int>& nums,int n){
        if(v.size()>1){
            ans.push_back(v);
        }
       set<int> st;

       for(int j=i;j<n;j++){
        //    if(j!=i && nums[j-1]==nums[j]) continue;
        if(st.count(nums[j])) continue;

           else if(v.size()==0 || v.back()<=nums[j]){
            v.push_back(nums[j]);
          
            st.insert(nums[j]);

              nds(j+1,v,nums,n);
            v.pop_back();  
            }
       
            
       }

    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        unordered_map<int,int>mp;
        nds(0,v,nums,n);
        return ans;
    }
};