class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()<=2){
            return true;
        }
        int i=0;
        int j=1;
        int a=0;
        int b=1;
        int x=0;
        while(x<nums.size() && (j<nums.size() && b<nums.size())){
            if(nums[i]<=nums[j]){
                i++;
                j++;
            }
             if(nums[a]>=nums[b]){
                a++;
                b++;
            }
            x++;
        }
        if(j==nums.size() || b==nums.size()){
            return true;
        }
        return false;
    }
};