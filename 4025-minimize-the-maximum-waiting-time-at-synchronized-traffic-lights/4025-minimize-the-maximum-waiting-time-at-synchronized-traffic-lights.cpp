class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrival) {
        int mini=0;
        sort(lights.begin(),lights.end());
        int waiting=0;
        for(int i=0;i<arrival.size();i++){
            int x=arrival[i]%period;
            if(x>=lights[lights.size()-1]){
                waiting=period-x;
                if(waiting>=mini){
                    mini=waiting;
                }
            }
        }
        return mini;
    }
};