class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<pair<int,int>>s;
        vector<int>v(n,-1);
        int maxi=INT_MIN;
        for(int ind=0;ind<2*n;ind++){
            int i=ind%n;
        maxi=max(maxi,nums[i]);
            if(s.empty()){
                s.push({i,nums[i]});
            }
            if(s.top().second > nums[i]){
                s.push({i,nums[i]});
            }
            else if(s.top().second<=nums[i]){
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