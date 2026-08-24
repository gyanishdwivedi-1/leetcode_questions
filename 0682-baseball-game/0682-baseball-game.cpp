class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int>s;
        int ans=0;
       
        for(int i=0;i<op.size();i++){
            if(op[i]!="C" && op[i]!="D" && op[i]!="+"){
              s.push(stoi(op[i]));      
            }
            else if(op[i]=="C"){
                s.pop();
                
            }
            else if (op[i]=="D"){
                int x=s.top()*2;
                s.push(x);
                
            }
            else {
                int a=s.top();
                s.pop();
                int y=a+s.top();
                s.push(a);
                s.push(y);
            }
        }
        while(!s.empty()){
            ans+=s.top();
            s.pop();

        }
        return ans;
    }
};