class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int>pref(n,0);
        for(int i=0;i<n;i++){
            int sum=0;
           for(int j=0;j<i;j++){
                if(boxes[j]=='1'){
                   sum+=abs(j-i); 
                }
                pref[i]=sum;
           }
        }
            vector<int>suff(n,0);
        for(int i=0;i<n;i++){
            int sum=0;
           for(int j=n-1;j>i;j--){
                if(boxes[j]=='1'){
                   sum+=abs(j-i); 
                }
                suff[i]=sum;
           }
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=suff[i]+pref[i];
        }
        return ans;
    }
};