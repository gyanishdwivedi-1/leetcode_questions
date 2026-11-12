class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int l=0;
        int r=0;
       int maxlen=1;
       int n=nums.size();
       int maxi=0;
       while(r<n){
        if(nums[r]<=maxi){
            maxi=nums[r];
            l=r;
        }
       else if(nums[r]>maxi){
            maxi=nums[r];
            maxlen=max(maxlen,r-l+1);
        }
        r++;
       } 
      int a=0;
      int b=0;
      int len=1;
      int  x=0;
      while(b<n){
        if(nums[b]>=x){
            x=nums[b];
            a=b;
        }
        else if(nums[b]<x){
            x=nums[b];
            len=max(len,b-a+1);
        }
        b++;

      }
      return max(maxlen,len);
    }
};