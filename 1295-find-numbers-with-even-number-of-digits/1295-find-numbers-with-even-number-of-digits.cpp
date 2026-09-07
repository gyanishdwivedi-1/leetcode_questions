class Solution {
public:
    bool dig(int n){
        int count=0;
        while(n!=0){
            n=n/10;
            count++;
        }
        if(count%2==0) return true;

        return false;
    }
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(dig(nums[i])) {
                    ans++;
            }
        }
        return ans;
    }
};