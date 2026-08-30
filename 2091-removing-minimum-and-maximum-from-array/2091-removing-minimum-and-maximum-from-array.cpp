class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int x=0;
        int y=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(mini>nums[i]){
                 mini=nums[i];
                x=i;
               
            }
             if(maxi<nums[i]){
                 maxi=nums[i];
                y=i;
               
            }
        }
        int minim=INT_MAX;
        if(y>x){
            minim=min(minim,y+1);
            int a=n-y;
            minim=min(minim,a+x+1);
            minim=min(minim,n-x);
        }
        else{
           minim=min(minim,x+1); 
           int a=n-x;
         
           minim=min(minim,a+y+1);
           minim=min(minim,n-y);
        }
        return minim;
    }
};