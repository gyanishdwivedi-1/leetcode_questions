class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        int x=nums1[0];
        cout<<x<<" ";
        if(x%2==0){
        for(int i=1;i<n;i++){
            if(nums1[i]%2!=0) return false;
        }
        }
        return true;
    }
};