class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
       stack<pair<int,int>>s;
        vector<int>v(temp.size(),0);
        int n=temp.size();
        int i=n-1;
        while(i>=0){
            if(s.empty()){
                s.push({temp[i],i});
            }
            if(s.top().first>temp[i]){
                v[i]=s.top().second-i;
                 s.push({temp[i],i});
            }
            else if(s.top().first<=temp[i]){
                while(!s.empty()  && s.top().first<=temp[i]){
                     s.pop();
                }
                if(!s.empty()){
                v[i]=s.top().second-i;
                }
                 s.push({temp[i],i});
            }
            i--;
        }
        return v;
    }
};