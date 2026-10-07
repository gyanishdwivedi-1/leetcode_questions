class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>maxi;
        int n=score.size();
        for(int i=0;i<score.size();i++){
                maxi.push({score[i],i});
        }
        vector<string>ans(n);
        for(int i=0;i<n;i++){
            if(i==0){
                ans[maxi.top().second]="Gold Medal";
            }
            else  if(i==1){
                ans[maxi.top().second]="Silver Medal";
            }
            else if(i==2){
                ans[maxi.top().second]="Bronze Medal";
            }
            else{
                int x=i+1;
                string s=to_string(x);
                ans[maxi.top().second]=s;
                  }
                  maxi.pop();
        }
        return ans;
    }
};