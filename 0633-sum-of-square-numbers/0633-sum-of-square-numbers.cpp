class Solution {
public:
    bool judgeSquareSum(int c) {
        int x=sqrt(c);
        long long i=0;
        while(i<=x){
            if(i*i+x*x==c){
                return true;
            }
         else if(i*i+x*x<c){
            i++;
         }
         else{
            x--;
         }
         }
         return false;
    }
};