class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
        int sum=0;
        int prod=1;
        while(x!=0){
            int ld=x%10;
                sum+=ld;
            prod*=ld;
            x/=10;

        }
        int ans=prod+sum;
        if(n%ans==0){
            return true;
        }
        return false;
    }
};