class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            int x=0;
            int a=0;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    x=j+1;
                for(int k=x;k<nums2.size();k++){
                    if(nums2[k]>nums1[i]){
                        a=1;
                        ans.push_back(nums2[k]);
                        break;
                    }
                }
                break;
                }
            }
            if(a==0){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};