class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<pair<int,int>>s;
        vector<int>v(n,-1);
        
        for(int ind=0;ind<2*n;ind++){
            int i=ind%n;
      
            if(s.empty()){
                s.push({i,nums[i]});
            }
            if(s.top().second > nums[i]){
                s.push({i,nums[i]});
            }
            else {
                while(!s.empty() && s.top().second<nums[i]){
                    v[s.top().first]=nums[i];
                    s.pop();
                }
                s.push({i,nums[i]});
            }
        }
        return v;
    }
};