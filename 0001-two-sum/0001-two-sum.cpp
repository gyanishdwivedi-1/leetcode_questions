class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<pair<int,int>>v;
     vector<int>v1;
      for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
      }
       std::sort(v.begin(),v.end());
         
        int s=0;
        int e=v.size()-1;
        while(s<e){
            if(v[s].first+v[e].first==target){
              v1.push_back(v[s].second)  ;
              v1.push_back(v[e].second);
              return v1;
            }
            else if(v[s].first+v[e].first<target){
                s++;
            }
            else{
                e--;
            }
        }
    
        return {};
    
   
    }
};
