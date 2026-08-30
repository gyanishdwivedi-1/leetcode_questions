class Solution {
public:
    int kthFactor(int n, int k) {
        if(k==1)return 1;
        int i=1;
        int count=0;
        while(i<=n){
            if(n%i==0){
                count++;
            }
             if(count==k)return i;
            i++;
        }
        if(count<k) return -1;
        return i;
    }
};