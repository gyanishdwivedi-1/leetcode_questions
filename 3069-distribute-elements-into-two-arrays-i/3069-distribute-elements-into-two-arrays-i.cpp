class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>a;
        a.push_back(nums[0]);
        vector<int>b;
        b.push_back(nums[1]);
        int k=0;
        int j=0;
        for(int i=2;i<nums.size();i++){
            if(a[k]>b[j]){
                a.push_back(nums[i]);
                k++;
            }
            else{
                b.push_back(nums[i]);
                j++;
            }
        }
        vector<int>c=a;
        c.insert(c.end(), b.begin(), b.end());
        return c;
    }
};