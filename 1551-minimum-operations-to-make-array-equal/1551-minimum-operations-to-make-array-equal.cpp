class Solution {
public:
    int minOperations(int n) {
        int x=2*n-1;
        int ans=0;
        while(x>n){
            ans+=x-n;
            x-=2;
        }
        return ans;
    }
};