class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int j=1;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(n%j==0){
                int a=nums[i]*nums[i];
                sum+=a;
            }
            j++;
        }
        return  sum;
    }
};