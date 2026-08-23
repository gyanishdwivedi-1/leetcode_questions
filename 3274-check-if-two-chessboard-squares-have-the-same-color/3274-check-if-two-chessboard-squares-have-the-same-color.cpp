class Solution {
public:
    bool checkTwoChessboards(string cord, string cor) {
        char x=cord[0];
        char y=cor[0];
        int n1=cord[1]-'0';
        int n2=cor[1]-'0';
        if((x=='a'||x=='c'||x=='e'||x=='g') && (y=='b'||y=='d'||y=='f'||y=='h') || (y=='a'||y=='c'||y=='e'||y=='g') && (x=='b'||x=='d'||x=='f'||x=='h')){
            if((n1%2==0 && n2%2!=0) || (n1%2!=0 && n2%2==0)){
                return true;
            }
        }
        else {
             if(n1%2==0 && n2%2==0){
                return true;
            }
            else if(n1%2!=0 && n2%2!=0){
                return true;
            }
            else {
                return false;
            }
           
        }
        return false;
    }
};