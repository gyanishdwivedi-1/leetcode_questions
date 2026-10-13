class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        long long sum1=0;
        long long sum2=0;
       
            int x=n/2;
           for(int i=0;i<x;i++){
            sum1+=nums[i];
           }
            for(int i=x;i<n;i++){
                sum2+=nums[i];
            }
       
        
        return sum2-sum1;
    }
};