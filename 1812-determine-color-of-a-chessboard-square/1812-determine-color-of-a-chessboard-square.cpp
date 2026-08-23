class Solution {
public:
    bool squareIsWhite(string cor) {
        char x=cor[0];
        int n=cor[1]-'0';
        if(x=='a'||x=='c'||x=='e'||x=='g'){
            if(n%2==0){
                return true;
            }
        }
        else{
            if(n%2!=0){
                return true;
            }
        }
        return false;
    }
};