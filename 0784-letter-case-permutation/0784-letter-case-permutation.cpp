class Solution {
public:
    void letter(int i,string &s,vector<string>&str){
        if(i>=s.length()){
            str.push_back(s);
            return ;
        }

        if(s[i]>='a' && s[i]<='z'){
            letter(i+1,s,str);
            s[i]=s[i]-32;
            letter(i+1,s,str);
            s[i]=s[i]+32;
        }
        else if(s[i]>='A' && s[i]<='Z'){
                letter(i+1,s,str);
                s[i]=s[i]+32;
                letter(i+1,s,str);
                s[i]=s[i]-32;
        }
        else{
            letter(i+1,s,str);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>str;
        letter(0,s,str);
        return str;
    }
};