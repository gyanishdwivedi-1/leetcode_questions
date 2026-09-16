class Solution {
public:
    int minimumOperations(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int count =0;
       for(int i=0;i<nums.size();i++){
            int x=0;
            if(nums[i]>0){
                x=nums[i];
            for(int j=i;j<nums.size();j++){
                nums[j]=nums[j]-x;
            }
            count++;
            }
         
       }
         return count;
    }
};